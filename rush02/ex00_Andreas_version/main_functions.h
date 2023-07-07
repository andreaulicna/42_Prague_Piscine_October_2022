/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:01:17 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/30 19:11:54 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_FUNCTIONS_H
# define MAIN_FUNCTIONS_H

# include <stdlib.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_is_valid_unsigned_int(char *nbr);
int		ft_get_size_dict(char *filename);
char	*ft_read_content_dict(char *filename, int size);

#endif
