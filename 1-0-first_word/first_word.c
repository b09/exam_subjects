/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   first_word.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/19 19:12:28 by bprado        #+#    #+#                 */
/*   Updated: 2019/02/19 19:23:06 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	while (*str > 0 && *str < 33)		// remove all whitespace at beginning of line
		++str;
	while (*str > 32 && *str < 127)
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)				// if not 1 parameter, display newline
	{							// name of program is always the first argument
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	return (0);
}
