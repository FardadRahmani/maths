#include <iostream>
/*
Task:
Durchschnitt berechnen

*/
#include <cmath>
int main() {


	float a=0.0f;
	float b = 0.0f;
	float c = 0.0f;
	float d = 0.0f;
	float e = 0.0f;
	
	std::cout << "enter a = "  << std::endl;
	std::cin >> a;
	std::cout << "enter b = " << std::endl;
	std::cin >> b;
	std::cout << "enter c = "  << std::endl;
	std::cin >> c;
	std::cout << "enter d = " << std::endl;
	std::cin >> d;
	std::cout << "enter e = " << std::endl;
	std::cin >> e;
	float durchschnitt = (a + b + c + d + e) / 5;
	std::cout << "Der Durchschnitt der Zahlen a...e betraegt = " <<durchschnitt<< std::endl;
	return 0;

}
