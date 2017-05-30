#include "hanoi.h"
using namespace std;

hanoi::hanoi(int k) {
	h = k-1;
	turm1 = new int[h];
	turm2 = new int[h];
	turm3 = new int[h];
	h1 = h;
	h2 = -1;
	h3 = -1;
	bauen(h);
}

void hanoi::setze(int h, int v, int n, int m)
{	
	if (h != 0) {
		setze(h - 1, v, m, n);
		cout  << "     " << v << "  -  " << n << endl;
		this->leg(v, n);
		this->print();
		setze(h - 1, m, n, v);
		
	}
}

void hanoi::setze_fast(int h, int v, int n, int m)
{
	if (h != 0) {
		setze_fast(h - 1, v, m, n);
		this->leg(v, n);
		setze_fast(h - 1, m, n, v);

	}
}

void hanoi::bauen(int h) {
	for (int k = 0; k <= h; k++)
	{
		turm1[k] = h-k+1;
		turm2[k] = 0;
		turm3[k] = 0;
	}
}

void hanoi::print() {
	for (int i = h; i >= 0; i--) {
		if (i <= h1 && turm1[i]) cout << turm1[i] << "\t";
		else cout << " " << "\t";

		if (i <= h2 && turm2[i]) cout << turm2[i] << "\t";
		else cout << " " << "\t";

		if (i <= h3 && turm3[i]) cout << turm3[i] << "\t";
		else cout << " " << "\t";

		cout  << endl;
	}
	cout << "##################" << endl;
}

void hanoi::leg(int v, int n) {
	if (v == 1 && n == 2 && h1 >= 0) turm2[++h2] = turm1[h1--];
	if (v == 1 && n == 3 && h1 >= 0) turm3[++h3] = turm1[h1--];

	if (v == 2 && n == 1 && h2 >= 0) turm1[++h1] = turm2[h2--];
	if (v == 2 && n == 3 && h2 >= 0) turm3[++h3] = turm2[h2--];

	if (v == 3 && n == 1 && h3 >= 0) turm1[++h1] = turm3[h3--];
	if (v == 3 && n == 2 && h3 >= 0) turm2[++h2] = turm3[h3--];
}
