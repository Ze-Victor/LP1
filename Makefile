PROG = conta
CC = g++
CPP_FLAGS = -O0 -std=c++11 -g

$(PROG): main.o conta.o cliente.o agencia.o carro.o motor.o
		$(CC) $(CPP_FLAGS) main.o conta.o cliente.o agencia.o carro.o motor.o -o $(PROG)
main.o: 
	$(CC) $(CPP_FLAGS) -c src/main.cpp
conta.o:
	$(CC) $(CPP_FLAGS) -c src/conta.cpp
cliente.o:
	$(CC) $(CPP_FLAGS) -c src/cliente.cpp
agencia.o:
	$(CC) $(CPP_FLAGS) -c src/agencia.cpp
carro.o:
	$(CC) $(CPP_FLAGS) -c src/carro.cpp
motor.o:
	$(CC) $(CPP_FLAGS) -c src/motor.cpp
clean: 
		rm -f *.o