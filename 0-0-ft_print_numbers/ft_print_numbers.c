/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/19 19:07:18 by bprado        #+#    #+#                 */
/*   Updated: 2019/02/19 19:11:14 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_number(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		write(1, &a, 1);
		++a;
	}
}


/*
int		main(void)
{
	ft_print_number();
	return (0);
}
/*
