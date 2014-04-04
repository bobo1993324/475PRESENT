all:	
	g++ main.cpp present.cpp uberzahl/uberzahl.cpp -std=c++0x
testBench: testBench.cpp
	g++ testBench.cpp present.cpp uberzahl/uberzahl.cpp -std=c++0x -o testBench
