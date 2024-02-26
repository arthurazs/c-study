default: build run

build:
	mkdir -p .build
	cc -Wall src/list.c -o .build/list

run:
	.build/./list

clean:
	rm -rf .build

