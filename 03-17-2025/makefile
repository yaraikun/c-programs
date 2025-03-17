SRC = prog9.c

CC = gcc
CFLAGS = -Wall -Wextra
BIN = a.exe
OUT = OUTPUT.txt

all: compile run

compile:
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

run:
	./$(BIN)

clean:
	del $(BIN) $(OUT)