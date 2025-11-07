#include <stdarg.h>
#include <unistd.h>
#include "Libft/libft.h"

int count_args(const char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		if (*s == '%')
		{
			s++;
			if (*s)
				count++;
		}
	}
	return (count);
}
static int	putnbr_base10(long nb)
{
	int 	count;
	char	digit;

	count = 0;
	if (nb >= 10)
	{
		count += putnbr_base10(nb / 10);
	}
	digit = '0' + (nb % 10);
	write(1, &digit, 1);
	return (count + 1);
}

static int put_hex(unsigned long n)
{
	char base[] = "0123456789abcdef";
	char buf[16];
	int i;
	int len;

	i = 0;
	if (n == 0)
		buf[i++] = '0';
	while (n > 0)
	{
		buf[i++] = base[n % 16];
		n /= 16;
	}
	len = i;
	while (i--)
		write(1, &buf[i], 1);
	return (len);
}
int write_c(va_list *ap)
{
	char c;

	c = (char)va_arg(*ap, int);
	return (write(1, &c, 1));
}

int write_s(va_list *ap)
{
	char *str;
	int len;

	str = va_arg(*ap, char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
int write_p(va_list *ap)
{
	unsigned long ptr;
	int len;

	ptr = (unsigned long)va_arg(*ap, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	len = put_hex(ptr);
	return (len + 2);
}
int write_d(va_list *ap)
{
	long nb;
	int n;
	int len;

	n = va_arg(*ap, int);
	nb = n;
	len = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		len++;
		nb = -nb;
	}
	len += putnbr_base10(nb);
	return (len);
}

int type_args(char c, va_list *ap)
{
	if (c == 'c')
		return (write_c(ap));
	else if (c == 's')
		return (write_s(ap));
	else if (c == 'p')
		return (write_p(ap));
	else if (c == 'd')
		return (write_d(ap));
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list list;
	int count;
	int total;

	total = 0;
	count = count_args(format);
	va_start(list, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			total += type_args(*(format + 1), &list);
			format += 2;
		}
		else
		{
			write(1, format, 1);
			total++;
			format++;
		}
	}
	return (0);
}

int main(void)
{
	ft_printf("=======test 1=======\n");
	char	test1 = 'a';
	ft_printf("mon prenom commence par %c\n\n", test1);
	ft_printf("=======test 2=======\n");
	char	test2[] = "axel";
	ft_printf("je m'appelle %s\n\n", test2);
	ft_printf("=======test 3=======\n");
	int		num = 42;
	char	*text = "Hello";
	void	*null_ptr = NULL;
	ft_printf("Adresse d'un int : %p\n", &num);
	printf("Avec printf : %p\n", &num);
	ft_printf("Adresse d'une chaîne : %p\n", text);
	printf("Avec printf : %p\n", text);
	ft_printf("Pointeur NULL : %p\n", null_ptr);
	printf("Avec printf : %p\n\n", null_ptr);
	ft_printf("=======test 4=======\n");
	ft_printf("Nombre positif : %d\n", 42);
	ft_printf("Nombre negatif : %d\n", -42);
	ft_printf("Nombre NULL : %d\n", 0);
	ft_printf("INT_MIN : %d\n", INT_MIN);
	ft_printf("INT_MAX : %d\n", INT_MAX);
	ft_printf("INT_MIN + 1 : %d\n", INT_MIN + 1);
}
