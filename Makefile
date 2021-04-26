myProgram: main.o 
	gcc -o myProgram main.o

main.o: main.c
	gcc -c -Wall main.c 

clean:
	rm my* *.o