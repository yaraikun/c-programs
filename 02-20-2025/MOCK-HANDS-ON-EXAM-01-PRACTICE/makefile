CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TESTDIR = test
SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC = $(SRCDIR)/main.c
BIN = $(BINDIR)/a.exe
INPUT = $(TESTDIR)/INPUT.txt
ACTUAL = $(TESTDIR)/ACTUAL.txt

.PHONY: all
all: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: run
run:
	./$(BIN)

.PHONY: test
test:
	"$(BIN)" < "$(INPUT)" > "$(ACTUAL)"

.PHONY: clean
clean:
	del /s /q $(OBJ) $(BIN)