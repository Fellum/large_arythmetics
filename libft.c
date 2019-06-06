//
// Created by Jasper Leann on 2019-06-06.
//

#include "libft.h"
#include <string.h>
char *ft_strdup(char const *src)
{
	return (strdup(src));
}

size_t ft_strlen(char *str)
{
	size_t res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

char	*ft_strcpy(char *dst, char *src)
{
	return (strcpy(dst, src));
}
