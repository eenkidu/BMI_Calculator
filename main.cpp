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
	int n;
	double bmis[100];

	std::wcout << "How many people to calculate?";
	std::cin >> n;

	for(int i=0;i<n;i++){
		double height, weight;

		std::cout << "Enter height(m) for person" << i + 1 << ":";
		std::cin >> height;


		std::cout << "Enter weight(kg) for person" << i + 1 << ":";
		std::cin >> weight;



		bmis[i] = weight / (height * height);
		}


	std::cout << "\n---Results---" << std::endl;
	for (int i = 0;i < n;i++) {
		std::cout << "Person" << i + 1 << "BMI:" << bmis[i] << "->";
		printBMIStatus(bmis[i]);
	}

	std::cout << "Goodbye!" << std::endl;
	return 0;
 }