#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//dice roll example code
	srand(time(NULL));//seed rand so you dont get the same random #s each time
	char input;//hold user input
	int roll;//holds rand's output
	cout << "Welcome to dice simulator. Press any key to roll, 'q' to quit" << endl << endl;
	do {//always runs program at least once
		roll = rand() % 6 + 1;//generates random number b/t 1 and 6
		switch (roll) {//branches code into different outputs
		case 1:
			cout << "You rolled a 1!" << endl;
			break;
		case 2:
			cout << "You rolled a 2!" << endl;
			break;
		case 3:
			cout << "You rolled a 3!" << endl;
			break;
		case 4:
			cout << "You rolled a 4!" << endl;
			break;
		case 5:
			cout << "You rolled a 5!" << endl;
			break;
		case 6:
			cout << "You rolled a 6!" << endl;
			break;
		}//end switch
		cout << "Press 'q' to quit, any other key to roll again" << endl;
		cin >> input;
	} while (input != 'q');//continues to loop until user types 'q'
}//end main