main: main.o Pokemon.o BattleState.o NormalBattleState.o AgileBattleState.o StrongBattleState.o PlayStyle.o AttackPlayStyle.o PhysicalAttackPlayStyle.o RunPlayStyle.o
	g++ main.o Pokemon.o BattleState.o NormalBattleState.o AgileBattleState.o StrongBattleState.o PlayStyle.o AttackPlayStyle.o PhysicalAttackPlayStyle.o RunPlayStyle.o -o main

main.o:	main.cpp Pokemon.cpp Pokemon.h BattleState.cpp BattleState.h NormalBattleState.h NormalBattleState.cpp AgileBattleState.h AgileBattleState.cpp StrongBattleState.h StrongBattleState.cpp PlayStyle.h PlayStyle.cpp AttackPlayStyle.h AttackPlayStyle.cpp PhysicalAttackPlayStyle.h PhysicalAttackPlayStyle.cpp RunPlayStyle.h RunPlayStyle.cpp
	g++ -c main.cpp

Pokemon.o: Pokemon.cpp Pokemon.h
	g++ -c Pokemon.cpp

BattleState.o: BattleState.cpp BattleState.h
	g++ -c BattleState.cpp

NormalBattleState.o: NormalBattleState.cpp NormalBattleState.h
	g++ -c NormalBattleState.cpp

AgileBattleState.o: AgileBattleState.cpp AgileBattleState.h
	g++ -c AgileBattleState.cpp

StrongBattleState.o: StrongBattleState.cpp StrongBattleState.h
	g++ -c StrongBattleState.cpp

PlayStyle.o: PlayStyle.cpp PlayStyle.h
	g++ -c PlayStyle.cpp

AttackPlayStyle.o: AttackPlayStyle.cpp AttackPlayStyle.h
	g++ -c AttackPlayStyle.cpp

PhysicalAttackPlayStyle.o: PhysicalAttackPlayStyle.cpp PhysicalAttackPlayStyle.h
	g++ -c PhysicalAttackPlayStyle.cpp

RunPlayStyle.o: RunPlayStyle.cpp RunPlayStyle.h
	g++ -c RunPlayStyle.cpp

run: main
	./main	

clean:
	rm *.o main