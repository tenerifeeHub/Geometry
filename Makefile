all():
	clear
	g++ -Wall *.h *.cpp -lncurses -Wsign-compare -std=c++0x
	clear
	./a.out