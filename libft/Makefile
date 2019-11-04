# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 09:36:49 by gmolin            #+#    #+#              #
#    Updated: 2019/11/01 14:17:40 by gmolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_lstdelone.c ft_putendl_fd.c ft_striteri.c ft_strrev.c \
		ft_lstiter.c ft_putnbr.c ft_atoi.c ft_lstnew.c \
		ft_strlcat.c  ft_strstr.c ft_bzero.c ft_memalloc.c \
     	ft_putstr.c ft_strlen.c ft_strsub.c ft_countdigit.c \
		ft_memccpy.c ft_putstr_fd.c ft_strlowcase.c ft_strtrim.c \
		ft_isalnum.c ft_memchr.c ft_strcat.c ft_strmap.c \
 		ft_strupcase.c ft_isalpha.c ft_memcmp.c ft_strchr.c \
		ft_strmapi.c ft_swap.c ft_isascii.c ft_memcpy.c ft_strclr.c \
		ft_putnbr_fd.c ft_strncat.c ft_tolower.c ft_isdigit.c \
	 	ft_memdel.c ft_strcmp.c ft_strncmp.c ft_toupper.c \
		ft_isprint.c ft_memmove.c ft_strcpy.c ft_strncpy.c \
    	ft_isspace.c ft_memset.c ft_strdel.c ft_strnequ.c ft_itoa.c \
		ft_putchar.c ft_strdup.c ft_strnew.c ft_lstadd.c \
		ft_putchar_fd.c ft_strequ.c ft_strnstr.c ft_lstdel.c \
    	ft_putendl.c ft_striter.c ft_strrchr.c ft_strjoin.c \
		ft_strsplit.c ft_lstmap.c ft_lstpushback.c ft_strndup.c \
		ft_strcdup.c ft_strclen.c ft_strcjoin.c 
		
INCLUDES = ./

OUTPUT = 	ft_lstdelone.o ft_putendl_fd.o ft_striteri.o ft_strrev.o \
			ft_lstiter.o ft_putnbr.o ft_atoi.o ft_lstnew.o \
			ft_strlcat.o  ft_strstr.o ft_bzero.o  ft_memalloc.o \
			ft_putstr.o ft_strlen.o ft_strsub.o ft_countdigit.o \
			ft_memccpy.o ft_putstr_fd.o ft_strlowcase.o ft_strtrim.o \
			ft_isalnum.o ft_memchr.o ft_strcat.o ft_strmap.o \
			ft_strupcase.o ft_isalpha.o ft_memcmp.o ft_strchr.o \
			ft_strmapi.o ft_swap.o ft_isascii.o ft_memcpy.o ft_strclr.o \
			ft_putnbr_fd.o ft_strncat.o ft_tolower.o ft_isdigit.o \
			ft_memdel.o ft_strcmp.o ft_strncmp.o ft_toupper.o \
			ft_isprint.o ft_memmove.o ft_strcpy.o ft_strncpy.o  \
			ft_isspace.o ft_memset.o ft_strdel.o ft_strnequ.o ft_itoa.o \
			ft_putchar.o ft_strdup.o ft_strnew.o ft_lstadd.o \
			ft_putchar_fd.o ft_strequ.o ft_strnstr.o ft_lstdel.o \
			ft_putendl.o ft_striter.o ft_strrchr.o ft_strjoin.o \
			ft_strsplit.o ft_lstmap.o ft_lstpushback.o ft_strndup.o \
			ft_strcdup.o ft_strclen.o ft_strcjoin.o
			
all: $(NAME)

$(NAME): 
		gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OUTPUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUTPUT)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
