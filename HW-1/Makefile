CC=gcc
CFLAGS=-Wall -Wextra -g
TARGETS=sizes pointer swap

all: $(TARGETS)

sizes: sizes.c
	$(CC) $(CFLAGS) -o sizes sizes.c

pointer: pointer.c
	$(CC) $(CFLAGS) -o pointer pointer.c

swap: swap.c
	$(CC) $(CFLAGS) -o swap swap.c

clean:
	rm -f $(TARGETS)

