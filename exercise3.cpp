#include <iostream>

int main(){

	char calculator;
	float number1, number2;

	std::cout << "\n";
	std::cout << "[c][a][l][c][u][l][a][t][o][r]" << std::endl;
	std::cout << "Enter two number, which you want to calc: "<< std::endl;
	std::cin >> number1;
	std::cin >> number2; 

	std::cout << "Select number \n"; 
	std::cout << "1. Addition +\n";
	std::cout << "2. Subtraction -\n";
	std::cout << "3. Multiplication *\n";
	std::cout << "4. Division /\n";	
	
	std::cin >> calculator;

	switch(calculator){
	
// additioning
		case '1':
			std::cout << number1 + number2;
			break;
// substracting
		case '2':
			std::cout << number1 - number2;
			break;
// multiplicating
		case '3':
			std::cout << number1 * number2;
			break;
// dividing
		case '4':
			std::cout << number1 / number2;
			break;
/**
 * If program gets wrong number
 */
		default:
			std::cout << "!!! WRONG NUMBER !!!" << std::endl;
			break;
		    }
		return 0;
}
