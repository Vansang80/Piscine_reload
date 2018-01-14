/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:39:06 by pasnguye          #+#    #+#             */
/*   Updated: 2017/11/09 02:17:05 by pasnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int		main(int argc, char **argv)
{
	int		fd;
	char	c;

	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}
