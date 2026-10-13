#include <iostream>
 
void printBMIStatus(double bmi) {
	if (bmi < 18.5) {
		std::cout << "Underweight" << std::endl;
	}
	else if (bmi < 24) {
		std::cout << "Normal" << std::endl;
	}
	else {
		std::cout << "overweight" << std::endl;
	}
}


int main() {
	double height, weight, bmi;
	std::cout << "Enter height(m):";
	std::cin >> height;
	std::cout << "Enter weight(kg):";
	std::cin >> weight;

	bmi = weight / (height * height);
	std::cout << "Your BMI is:" << bmi << std::endl;

	printBMIStatus(bmi);
	return 0;
 }