#include <iostream>
/*
Task:
Oberfläche Kreis errechnen
A=pi*r^2
C=2*pi*r

*/
#include <cmath>
int main() {

	const float PI = 3.14f;
	float r;
	std::cout << "Geben Sie den Radius Ihres Kreises an = " << std::endl;
	std::cin >> r;
	float a = PI * pow(r, 2);
	float c = 2 * PI * r;

	std::cout << "Die Fläche A des Kreises mit Radius" << r << "betraegt= "<< a<< std::endl;
	std::cout << "Der Umfang C des Kreises mit Radius" << r << "betraegt= " << c << std::endl;

	return 0;

}
