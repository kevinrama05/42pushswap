# --- PUSH_SWAP MAKEFILE (Flat Structure, using Wildcard) ---

# Project name
NAME = push_swap

# Use the 'wildcard' function to find all .c files in the current directory
SRC = $(wildcard *.c)

# Files to exclude from the compilation process if they are in the root (e.g., main.c is required, but if we had a temporary test.c)
# We won't exclude anything here since all files listed previously are required.

# Object files
OBJ = $(SRC:.c=.o)

# Main Header File (must be in the root)
HEADER = push_swap.h

# Compiler and Flags (42 Norm)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# --- Rules ---

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

# Compile C files. No -I flag is required since headers are in the same directory.
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
