main: main.o Enemy.o Snake.o Jaguar.o Gorilla.o Cannibal.o SquadMember.o EnemyFactory.o SnakeFactory.o JaguarFactory.o GorillaFactory.o CannibalFactory.o
	g++ main.o Enemy.o Snake.o Jaguar.o Gorilla.o Cannibal.o SquadMember.o EnemyFactory.o SnakeFactory.o JaguarFactory.o GorillaFactory.o CannibalFactory.o -o main

main.o:	main.cpp Enemy.cpp Enemy.h Snake.cpp Snake.h Jaguar.cpp Jaguar.h Gorilla.cpp Gorilla.h Cannibal.cpp Cannibal.h SquadMember.h SquadMember.cpp EnemyFactory.cpp SnakeFactory.cpp JaguarFactory.cpp GorillaFactory.cpp CannibalFactory.cpp
	g++ -c main.cpp

Enemy.o: Enemy.cpp Enemy.h
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

EnemyFactory.o: EnemyFactory.cpp EnemyFactory.h
	g++ -c EnemyFactory.cpp

SnakeFactory.o: SnakeFactory.cpp SnakeFactory.h
	g++ -c SnakeFactory.cpp

JaguarFactory.o: JaguarFactory.cpp JaguarFactory.h
	g++ -c JaguarFactory.cpp

GorillaFactory.o: GorillaFactory.cpp GorillaFactory.h
	g++ -c GorillaFactory.cpp

CannibalFactory.o: CannibalFactory.cpp CannibalFactory.h
	g++ -c CannibalFactory.cpp

run: main
	./main	

clean:
	rm *.o main