/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countdown.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/19 18:55:11 by bprado        #+#    #+#                 */
/*   Updated: 2019/02/19 19:06:17 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{	
	char a;

	a = 58;						// 58th char position on the ascii table
	while (a-- > '0')			// 'a' must be one position greater than '9' in order
		write(1, &a, 1);		// to evaluate correctly
	write(1, "\n", 1);
	return (0);
}
