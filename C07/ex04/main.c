#include <stdio.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	printf("%s\n", ft_convert_base("15", "0123456789", "0123456789abcdef"));
}
