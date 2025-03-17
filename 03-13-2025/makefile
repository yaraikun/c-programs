SRC = prog5.c

CC = gcc
CFLAGS = -Wall -Wextra
BIN = a.exe
OUT = OUTPUT.txt

all: compile run

compile:
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

run:
# "./$(BIN)" > $(OUT)
# cat $(OUT)
	"./$(BIN)"

clean:
	del $(BIN) $(OUT)