all: main.o funcionario.o empresa.o help.o data.o
	g++ -Wall -ansi -pedantic -o main ./obj/*.o

main.o:
	g++ -c ./src/main.cpp -I ./include -o ./obj/main.o

data.o:
	g++ -c ./src/data.cpp -I ./include -o ./obj/data.o

funcionario.o:
	g++ -c ./src/funcionario.cpp -I ./include -o ./obj/funcionario.o

empresa.o:
	g++ -c ./src/empresa.cpp -I ./include -o ./obj/empresa.o

help.o:
	g++ -c ./src/help.cpp -I ./include -o ./obj/help.o

clear:
	rm ./obj/*.o
	rm ./main

run:
	./main
