LIB = ar rcs

NAME = libftprintf.a

MY_SOURCES = ft_printf.c \
    utils.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

$(NAME):$(MY_OBJECTS) ft_printf.h
    $(LIB) $(NAME) $(MY_OBJECTS)

%.o: %.c
    gcc $(CFLAGS) -c -o $@ $<

all: $(NAME)

clean:
    rm -f $(MY_OBJECTS) $(BONUS_OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
