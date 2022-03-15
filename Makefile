# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeongki <hyeongki@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 00:26:55 by hyeongki          #+#    #+#              #
#    Updated: 2022/03/15 22:06:12 by hyeongki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFALGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
       ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
       ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c
OBJS = $(SRCS:.c=.o)
RM = rm -f
NAME = libft.a

$(NAME) : $(OBJS)
	    ar rcs $(NAME) $(OBJS)

all : $(NAME)

bonus: all

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :
	all clean fclean re bonus
