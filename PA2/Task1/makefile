main: main.o Enemies.o Snake.o Jaguar.o Gorilla.o Cannibal.o SquadMember.o
	g++ main.o Enemies.o Snake.o Jaguar.o Gorilla.o Cannibal.o SquadMember.o -o main

main.o:	main.cpp Enemies.cpp Enemies.h Snake.cpp Snake.h Jaguar.cpp Jaguar.h Gorilla.cpp Gorilla.h Cannibal.cpp Cannibal.h SquadMember.h SquadMember.cpp
	g++ -c main.cpp

Enemy.o: Enemies.cpp Enemies.h
	g++ -c Enemy.cpp

Snake.o: Snake.cpp Snake.h
	g++ -c Snake.cpp

Jaguar.o: Jaguar.cpp Jaguar.h
	g++ -c Jaguar.cpp

Gorilla.o: Gorilla.cpp Gorilla.h
	g++ -c Gorilla.cpp

Cannibal.o: Cannibal.cpp Cannibal.h
	g++ -c Cannibal.cpp

SquadMember.o: SquadMember.cpp SquadMember.h
	g++ -c SquadMember.cpp

run: main
	./main	

clean:
	rm *.o main