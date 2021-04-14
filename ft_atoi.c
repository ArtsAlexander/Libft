/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:30 by aarts             #+#    #+#             */
/*   Updated: 2021/04/14 16:06:46 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_space(char c)
// {
// 	if (c == ' ' || c == '\f' || c == '\r' ||
// 		c == '\n' || c == '\t' || c == '\v')
// 		return (1);
// 	return (0);
// }

// int	ft_check(const char *str)
// {
// 	int i;

// 	i = 0;
// 	while (ft_space(str[i]) == 1)
// 		i++;
// 	while ((str[i] == '-') || (str[i] == '+'))
// 		i++;
// 	if ((str[i] >= '0') && (str[i] <= '9'))
// 		return (1);
// 	return (0);
// }

// int	ft_atoi(const char *str)
// {
// 	int sign;
// 	int a;

// 	sign = 1;
// 	a = 0;
// 	while (ft_check(str) == 0)
// 		return (0);
// 	while (ft_space(*str) == 1)
// 		str++;
// 	while ((*str == '+') || (*str == '-'))
// 	{
// 		if (*str == '-')
// 			sign *= -1;
// 		str++;
// 	}
// 	while ((*str >= '0') && (*str <= '9'))
// 		str++;
// 	str--;
// 	while ((*str >= '0') && (*str <= '9'))
// 	{
// 		a += (*str - '0') * sign;
// 		str--;
// 		sign *= 10;
// 	}
// 	return (a);
// }

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	res;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	is_neg = (str[i] == '-') ? -1 : 1;
	if (is_neg == -1 || str[i] == '+')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * is_neg);
}

int main(void)
{
    int std, ft;
    char *test_cases[] = {"-9223372036854775807", "18446744073709552000", "18446744073709551999", "-0", "++5", "+-5", "--5", "00512", "23058430092136939529", "\t\v\r\n\f -5", "-9223372036854775808", "-9223372036854775809", "9223372036854775808", "9999999999999999999", "2147484160", "6a", "", "2147483648", "-2147483648", "2147483647", "-4294967296", "4294967296", "4294967295"};
    int length = sizeof test_cases / sizeof *test_cases;
    int err_count = 0;

    if (sizeof ft_atoi("") != sizeof atoi(""))
    {
        puts("[\e[91mERR\e[0m]\tYour atoi doesn't return an int\n");
        err_count++;
    }

    for (int i = 0; i < length; i++)
    {
        if ((std = atoi(test_cases[i])) != (ft = ft_atoi(test_cases[i])))
        {
            printf("[\e[91mERR\e[0m]\tTest case:\t\"%s\"\n\tExpected :\t%d\n\tObtained :\t%d\n\n", test_cases[i], std, ft);
            err_count++;
        }
    }

    if (err_count)
        printf("\e[91mTests failed with \e[93m%d\e[91m error(s)\e[0m\n", err_count);
    else
        puts("\e[32mEverything seems to work :)\e[0m");

    return (0);
}

// #include <stdlib.h>
// int main ()
// {
// 	char test[]="-2147483648";
// 	printf("t_value = %s \n", test);
// 	printf("%d\n",ft_atoi(test));
//     printf("SYS %d\n",atoi(test));
//     printf("\n");

// 	char test1[]="9223372036854775807";
// 	printf("t_value = %s \n", test1);
// 	printf("%d\n",ft_atoi(test1));
//     printf("SYS %d\n",atoi(test1));
//     printf("\n");
    
// 	char test2[]="18446744073709552000";
// 	printf("t_value = %s \n", test2);
// 	printf("%d\n",ft_atoi(test2));
//     printf("SYS %d\n",atoi(test2));
//     printf("\n");
    
// 	char test7[]="18446744073709551999";
// 	printf("t_value = %s \n", test7);
// 	printf("%d\n",ft_atoi(test7));
//     printf("SYS %d\n",atoi(test7));
// 	printf("\n");

// 	char test8[]="-0";
// 	printf("t_value = %s \n", test8);
// 	printf("%d \n",ft_atoi(test8));
//     printf("SYS %d\n",atoi(test8));
//     printf("\n");

//     char test9[]="23058430092136939529";
// 	printf("t_value = %s \n", test9);
// 	printf("%d \n",ft_atoi(test9));
//     printf("SYS %d\n",atoi(test9));
// 	printf("\n");

// 	char test10[]="99999999999999999999999999";
// 	printf("t_value = %s \n", test10);
// 	printf("%d \n",ft_atoi(test10));
//     printf("SYS %d\n",atoi(test10));
// 	printf("\n");

// 	char test11[]="-99999999999999999999999999";
// 	printf("t_value = %s \n", test11);
// 	printf("%d \n",ft_atoi(test11));
//     printf("SYS %d\n",atoi(test11));
// }