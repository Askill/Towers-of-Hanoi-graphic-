#include <iostream>
using namespace std;

class hanoi {
private:
	int h;
	int* turm1;
	int* turm2;
	int* turm3;
	int h1;
	int h2;
	int h3;

public:
	void setze(int, int, int, int);
	void setze_fast(int, int, int, int);
	void print();
	void bauen(int);
	void leg(int, int);
	hanoi(int h);
	~hanoi() {};
};
