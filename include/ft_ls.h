/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgilwood <bgilwood@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:25:56 by bgilwood          #+#    #+#             */
/*   Updated: 2021/03/28 20:15:07 by bgilwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS
# define FT_LS

# include <dirent.h>
# include "ft_list.h"

DIR						*open_folder(char *name);

typedef struct			s_file
{
	t_list				*sub_dirs;
	char				*name;
	long				date;
	char				*type;
	struct s_file		*parent;
}						t_file;

#endif