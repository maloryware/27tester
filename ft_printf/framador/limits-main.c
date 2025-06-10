#include <ft_printf.h>
#include <limits.h>
int	main()
{
	printf("%d\n", ft_printf("\nmine:%p\n%p\n", LONG_MIN, LONG_MAX));
	printf("%d\n", printf("\noriginal:%p\n%p\n", LONG_MIN, LONG_MAX));
	printf("%d\n", ft_printf("\nmine:%p\n%p\n", ULONG_MAX, -ULONG_MAX));
	printf("%d\n", printf("\noriginal%p\n%p\n", ULONG_MAX, -ULONG_MAX));
}
