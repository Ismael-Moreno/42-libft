NAME 	= libft.a
CFLAGS 	= -Wall -Wextra -Werror
CC 		= gcc
SRC 	= ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c
OBJ 	= $(SRC:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rcs $(NAME) $(OBJ)
	@echo Mandatory part compiled successfully

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo object files deleted
 
fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) deleted
 
re: fclean all
 
.PHONY: re, clean, fclean, all, bonus