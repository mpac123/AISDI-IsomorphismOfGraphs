isomorph: main.cpp Graph.h
	g++ -o isomorph main.cpp -I. -Wall -std=c++11 -g

clean:
	rm isomorph -f
