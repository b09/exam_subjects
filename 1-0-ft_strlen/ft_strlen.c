/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/19 19:24:10 by bprado        #+#    #+#                 */
/*   Updated: 2019/02/19 19:31:00 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while(*str != 0)
	{
		++str;
		++i;
	}
	return (i);
}

/*
// main func for testing, includes <stdio.h> header
int		main(void)
{
	int 	i = 0;
	char	*str = "Hello World!";

	i = ft_strlen(str);
	printf("i is: %d\n", i);
	return (0);
}

*/
