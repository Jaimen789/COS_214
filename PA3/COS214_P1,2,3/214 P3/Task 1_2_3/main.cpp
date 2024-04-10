#include "CadburyFactory.h"
#include "NestleFactory.h"
#include "LindtFactory.h"
#include "Confectionery.h"

//#include "DairyMilk.h"
//#include "MilkyBar.h"
//#include "Lindor.h"
//#include "DairyMilkBubbly.h"
//#include "Areo.h"

//#include "Chocolate.h"
//#include "AeratedChocolate.h"//

int main () {
	int num;
	string handler = "";
	int bubbles;

	bool again = true;
	while (again) {

		cout << "Choose the type of chocolate you want: Chocolate = 1, AeratedChocolate = 2 > ";
		handler = "";
		cin >> handler;

		if (handler == "1") { 
			cout << "Choose the brand of chocolate: Cadbury = 1, Nestle = 2, Lindt = 3 > ";
			handler = "";
			cin >> handler;

			if (handler == "1") {//cadbury chocolate 
				cout << "How many Chocolates? ";
				cin >> num;

				cout << "Is your chocolate a slab? (y/n): ";
				handler = "";
				cin >> handler;

				Confectionery** store = new Confectionery*[num];
				CadburyFactory* plant = new CadburyFactory();

				for (int i = 0; i < num; i++) {
					if (handler == "y")
						store[i] = plant->createChocolate(true);
					else store[i] = plant->createChocolate(false);
				} //done
			}

			else if (handler == "2") { //nestle chocolate

				cout << "How many Chocolates? ";
				cin >> num;

				cout << "Is your chocolate a slab? (y/n): ";
				handler = "";
				cin >> handler;

				Confectionery** store = new Confectionery*[num];
				NestleFactory* plant = new NestleFactory();

				for (int i = 0; i < num; i++) {
					if (handler == "y")
						store[i] = plant->createChocolate(true);
					else store[i] = plant->createChocolate(false);
				} //done
			}

			else if (handler == "2") { //lindt chocolate

				cout << "How many Chocolates? ";
				cin >> num;

				cout << "Is your chocolate a slab? (y/n): ";
				handler = "";
				cin >> handler;

				Confectionery** store = new Confectionery*[num];
				LindtFactory* plant = new LindtFactory();

				for (int i = 0; i < num; i++) {
					if (handler == "y")
						store[i] = plant->createChocolate(true);
					else store[i] = plant->createChocolate(false);
				} //done
			}

			else {
				cout << "No such chocolate, restart. ";
				continue;
			}
			again = false;
		}

		/* xxxxxxxxxxxxxxxxxxxxxxx */

		else if (handler == "2") { //aeratedChocolate
			cout << "Choose the brand: Cadbury = 1, Nestle = 2 >";
			handler = "";
			cin >> handler;

			if (handler == "1") { //cadbury AeratedChoc
				cout << "Choose how many bubbles per cubic cm: ";
				cin >> bubbles;

				cout << "How many aerated chocolates? ";
				cin >> num;

				Confectionery** store = new Confectionery*[num];
				CadburyFactory* plant = new CadburyFactory();

				for (int i = 0; i < num; i++) {
					store[i] = (Confectionery*) plant->createAeratedChocolate(bubbles);
				}
			} //done

			else if (handler == "2") { //nestle AeratedChoc
				cout << "Choose how many bubbles per cubic cm: ";
				cin >> bubbles;

				cout << "How many aerated chocolates? ";
				cin >> num;

				Confectionery** store = new Confectionery*[num];
				NestleFactory* plant = new NestleFactory();

				for (int i = 0; i < num; i++) {
					store[i] = (Confectionery*) plant->createAeratedChocolate(bubbles);
				} //done
			} else { 
				cout << "No such aerated chocolate, restart. ";
				continue;
			}


		} else { //wrong entry
			cout << "No option exists, try again. ";
			continue;
		}
	}

	return 0;
}