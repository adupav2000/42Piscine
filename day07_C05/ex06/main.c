#include <stdio.h>
#include "ft_is_prime.c"
int main()
{
	printf("%d is prime = %d\n", ft_is_prime(45), 45);
	printf("%d is prime = %d\n", ft_is_prime(61), 61);
	printf("%d is prime = %d\n", ft_is_prime(7), 7);
	printf("%d is prime = %d\n", ft_is_prime(2), 2);
	printf("%d is prime = %d\n", ft_is_prime(1), 1);
	printf("%d is prime = %d\n", ft_is_prime(88), 88);
	printf("%d is prime = %d\n", ft_is_prime(87), 87);
	printf("%d is prime = %d\n", ft_is_prime(45), 45);
	printf("%d is prime = %d\n", ft_is_prime(2147483647), 2147483647);
	return 0;
}
