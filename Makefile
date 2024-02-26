default: build run

build:
	@cc -Wall list.c -o list

run:
	@./list

clean:
	@rm -f list
