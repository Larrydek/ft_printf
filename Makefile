lIB = ar rcs

NAME = libftprintf.a
MY_SOURCES = ft_printf.c \
				utils.c \
				utils_format.c \
				ft_print_hex.c \
				ft_print_num.c \
				ft_print_uint.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibreria
all: ${NAME}
${NAME}: ${MY_OBJECTS}
	@${CC} ${CFLAGS} ${MY_OBJECTS} -o ${NAME}
clean:
		rm -f $(MY_OBJECTS)
fclean: clean
		rm -f $(NAME)
re:     fclean all
.PHONY: all, clean, fclean, re
