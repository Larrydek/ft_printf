CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = mi_programa
SOURCE_FILES = main.c archivo1.c archivo2.c

all: $(TARGET)

$(TARGET): $(SOURCE_FILES)
    $(CC) $(CFLAGS) $^ -o $@

clean:
    rm -f $(TARGET)
