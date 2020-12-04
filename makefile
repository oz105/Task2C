CC = gcc 
AR = ar
FLAGS = -Wall -g 

main.o: main.c
	$(CC) $(FLAGS) -c main.c 
	
myBank.o: myBank.c
	$(CC) $(FLAGS) -c myBank.c
main: main.o myBank.o
	$(CC) $(FLAGS) -o main main.o myBank.o
	
.PHONY: clean all

clean:
	rm -f *.o mains	
