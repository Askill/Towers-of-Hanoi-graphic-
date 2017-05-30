#include <iostream>
#include "hanoi.h"
using namespace std;


int main() // komplexität von 2^n, wobei n die Anzahl der Scheiben ist
{
	int h = 1, a = 1, z = 2, u = 1;
	char ende = 'y';

	while ((ende == 'y')) {

		cout << "Geben Sie Hoehe des ersten Stapels, den Anfangs- und Zielstab an. (1 <= (Anfang, Ziel) <= 3 Und Hoehe > 0)" << endl;
		cout << "Hoehe: ";	cin >> h;
		cout << "Anfang: ";	cin >> a;
		cout << "Ziel: ";	cin >> z;
		cout << endl;

		if (h > 0 && a, z > 0 && a, z <= 3 && a != z) {
			
			u = 6 - a - z;
			hanoi* Hanoi = new hanoi(h);
			Hanoi->print();
			Hanoi->setze(h, a, z, u);

			//Hanoi->setze_fast(h, a, z, u);		//schnellere Variante ohne Ausgabe der Zwischenergebnisse, läuft bis ca n=32 einigermaßen schnell
			Hanoi->print();

			cout << endl;
		}
		else {
			h = 1, a = 1, z = 2, u = 1;
			cout << "Geben Sie andere Werte ein." << endl;
		}
		cout << "Wollen Sie weiter testen? y/n" << endl; cin >> ende;
	}	

	system("PAUSE");
}
