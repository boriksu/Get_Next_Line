/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dholiday <dholiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:35:53 by dholiday          #+#    #+#             */
/*   Updated: 2019/04/26 18:37:18 by dholiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include "libft/libft.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		get_next_line(const int fd, char **line);

#endif
