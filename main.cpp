#include <iostream>
 
int main() {
	double height, weight, bmi;
	std::cout << "Enter height(m):";
	std::cin >> height;
	std::cout << "Enter weight(kg):";
	std::cin >> weight;

	bmi = weight / (height * height);
	std::cout << "Your BMI is:" << bmi << std::endl;

	return 0;
 }