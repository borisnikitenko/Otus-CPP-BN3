#include <iostream>

#include "random_value.h"

#include "high_scores.h"

int main() {

	//const int target_value = 54;
	int current_value = 0;
	bool not_win = true;
	int attempts_count = 0;
	int c_value = f_random_value();
	int hsc = 0;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		attempts_count += 1;

		if (current_value > c_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value < c_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}

	} while(true);

	std::cout << "Do you want to see the high score table? (1 - yes, 2 - quit)" << std::endl;

	std::cin >> hsc;

	switch (hsc)
	{
		case 1:
			f_high_scores(attempts_count);
		break;

		case 2:
		break;
	default:
		std::cout << "Wrong value has been entered - quitting!" << std::endl;
		break;
	}

	
	return 0;
}