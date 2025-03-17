all: compile run

compile:
	gcc -o a -Wall -Wextra -I. main.c

run:
	"./a.exe" < CARS-RATING.txt > ACTUAL.txt
	cat ACTUAL.txt

clean:
	rm a.exe ACTUAL.txt