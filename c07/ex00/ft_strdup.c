
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		n;

	n = 0;
	while (src[n])
		n++;
	i = 0;
	result = (char *) malloc(sizeof(char) * n);
	if (result == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
