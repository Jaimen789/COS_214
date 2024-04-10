main: main.o Confectionery.o Chocolate.o AeratedChocolate.o DairyMilk.o MilkyBar.o Lindor.o DairyMilkBubbly.o Areo.o ConfectioneryFactory.o CadburyFactory.o NestleFactory.o LindtFactory.o
	g++ main.o Confectionery.o Chocolate.o AeratedChocolate.o DairyMilk.o MilkyBar.o Lindor.o DairyMilkBubbly.o Areo.o ConfectioneryFactory.o CadburyFactory.o NestleFactory.o LindtFactory.o -o main

main.o:	main.cpp Confectionery.cpp Confectionery.h Chocolate.cpp Chocolate.h AeratedChocolate.cpp AeratedChocolate.h DairyMilk.h DairyMilk.cpp MilkyBar.h MilkyBar.cpp Lindor.h Lindor.cpp DairyMilkBubbly.h DairyMilkBubbly.cpp Areo.h Areo.cpp ConfectioneryFactory.h ConfectioneryFactory.cpp CadburyFactory.h CadburyFactory.cpp NestleFactory.h NestleFactory.cpp LindtFactory.h LindtFactory.cpp
	g++ -c main.cpp

Confectionery.o: Confectionery.cpp Confectionery.h
	g++ -c Confectionery.cpp

Chocolate.o: Chocolate.cpp Chocolate.h
	g++ -c Chocolate.cpp

AeratedChocolate.o: AeratedChocolate.cpp AeratedChocolate.h
	g++ -c AeratedChocolate.cpp

DairyMilk.o: DairyMilk.cpp DairyMilk.h
	g++ -c DairyMilk.cpp

MilkyBar.o: MilkyBar.cpp MilkyBar.h
	g++ -c MilkyBar.cpp

Lindor.o: Lindor.cpp Lindor.h
	g++ -c Lindor.cpp

DairyMilkBubbly.o: DairyMilkBubbly.cpp DairyMilkBubbly.h
	g++ -c DairyMilkBubbly.cpp

Areo.o: Areo.cpp Areo.h
	g++ -c Areo.cpp

ConfectioneryFactory.o: ConfectioneryFactory.cpp ConfectioneryFactory.h
	g++ -c ConfectioneryFactory.cpp

CadburyFactory.o: CadburyFactory.cpp CadburyFactory.h
	g++ -c CadburyFactory.cpp

NestleFactory.o: NestleFactory.cpp NestleFactory.h
	g++ -c NestleFactory.cpp

LindtFactory.o: LindtFactory.cpp LindtFactory.h
	g++ -c LindtFactory.cpp

run: main
	./main	

clean:
	rm *.o main