#include <iostream>
typedef int werte_t;

struct Adresse {
	werte_t zipcode;
	werte_t Streetnr;
};

int main()
{
	Adresse meineAdresse{ 46485,1 }; //PFLICHT
	std::cout << meineAdresse.zipcode;
	return 0;
}