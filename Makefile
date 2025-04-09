
# Compiler and Flags
CC = gcc
CFLAGS = $(shell pkg-config --cflags raylib) -Wall -Wextra -O2
LDFLAGS = $(shell pkg-config --libs raylib) -lm
# Project files
SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = main

# Targets
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $< $(CFLAGS) -o $@

# Utility targets
clean:
	rm -f $(OBJ) $(EXEC)

rebuild: clean all

run: all
	./$(EXEC)
