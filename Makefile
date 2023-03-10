default: build run clean

build:
	g++ src/*.cpp -o Main.o --std=c++17

run:
	./Main.o

clean:
	rm Main.o

test:
	g++ tests/*.cpp -o Test.o --std=c++17
	./Test.o
	rm Test.o
