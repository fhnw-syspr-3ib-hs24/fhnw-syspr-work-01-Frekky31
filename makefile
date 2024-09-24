CC=gcc 
CFLAGS=-std=c99 -pedantic -pedantic-errors -Werror -Wall -Wextra

all: my_args sizeof my_tree

my_args: my_args.c
sizeof: sizeof.c
my_tree: my_tree.c

clean:
	rm -f my_args
	rm -f sizeof
	rm -f my_tree
