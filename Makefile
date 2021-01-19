all: FizzBuzz

FizzBuzz: main.cpp
	g++ -o FizzBuzz main.cpp -std=c++11

clean:
	rm FizzBuzz
