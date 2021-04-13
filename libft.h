/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:10:18 by aarts             #+#    #+#             */
/*   Updated: 2021/04/13 16:22:33 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void						ft_bzero(void *s, size_t n);
void						*ft_memccpy(void *dst, const void *src, int c, size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						*ft_memmove(void *dst, const void *src, size_t n);
void						*ft_memset(void *s, int c, size_t n);
size_t						ft_strlcat(char *dst, const char *src, size_t size);
size_t						ft_strlcpy(char *dst, const char *src, size_t size);
size_t						ft_strlen(const char *s);
int 						ft_memcmp(const void *s1, const void *s2, size_t n);
char						*strchr(const char *s, int c);
char						*strrchr(const char *s, int c);


#endif