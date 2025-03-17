CC = gcc
CFLAGS = -Wall -Wextra -I.

SRC = prog5.c
BIN = a.exe

IN = STUDENTS.txt
OUT = OUTPUT.txt

all: clean

compile:
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

run: compile
	$(BIN) < $(IN) > $(OUT)
	@cat $(OUT)

clean: run
	del $(BIN)