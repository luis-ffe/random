
CC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone

SRCS = megaphone.cpp

# Default rule to build the executable
all: $(NAME)

# Rule to compile the source file into the target executable
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

# Clean rule to remove the target executable
clean:
	rm -f $(NAME)
