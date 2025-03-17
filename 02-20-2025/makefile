CC = gcc
CFLAGS = -Wall -Wextra

SRC = $(wildcard prog*.c)
BIN = $(patsubst prog%.c,%,$(SRC))

.PHONY: all
all: $(BIN)

%: prog%.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	del /q $(BIN).exe
