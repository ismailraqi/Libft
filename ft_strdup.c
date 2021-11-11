#include "libft.h"
char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	copy = (char *) malloc(sizeof(char) * (size + 1));
	if (!copy)
		return (NULL);
	while (i < size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
