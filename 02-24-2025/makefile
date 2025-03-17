all: clean

compile:
	@gcc -Wall prog3.c

run: compile
	@./a.exe < STUDENTS.txt

clean: run
	@rm -rf "./a.exe"