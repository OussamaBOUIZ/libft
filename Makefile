# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 12:58:15 by obouizga          #+#    #+#              #
#    Updated: 2021/11/21 17:55:54 by obouizga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		 ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		 ft_memset.c ft_split.c ft_strchr.c ft_strmapi.c  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		 ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_putendl_fd.c \
		 ft_strnstr.c ft_strrchr.c ft_putnbr_fd.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONS = 	 ft_lstnew_bonus.c  ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c
OBJF = $(SOURCE:.c=.o)
NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

B_OB = $(BONS:.c=.o)

all : $(NAME)
	
$(NAME) : $(OBJF) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< 
	ar rc $(NAME) $@

bonus: $(B_OB)

clean: 
	$(RM) $(OBJF) $(B_OB)
	
fclean : clean
	$(RM) $(NAME)
re : fclean all bonus






