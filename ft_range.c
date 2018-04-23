
#include "includes/libft.h"

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(res = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
