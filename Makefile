PROG = conta
CC = g++
CPP_FLAGS = -O0 -std=c++11 -g

$(PROG): main.o conta.o
		$(CC) $(CPP_FLAGS) main.o conta.o -o $(PROG)
main.o: 
	$(CC) $(CPP_FLAGS) -c src/main.cpp
conta.o:
	$(CC) $(CPP_FLAGS) -c src/conta.cpp
clean: 
		rm -f *.o