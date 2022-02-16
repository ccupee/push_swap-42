#include "push_swap.h"

int check_string(char   *str)
{
    int len;

    len = ft_strlen(str);

}

char    **make_array_str(char *str)
{
    char    **arr;

    arr = ft_split(str, ' ');
    if (!arr)
        return (NULL);
    return (arr);
}