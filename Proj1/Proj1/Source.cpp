

// Hello Program 

#include <iostream>
#include <string>

char buff[512];


using namespace std;
//
char* printCh(void);        // Prototype

int main() {
	
	cout << "Hello back to C++" << endl;	
	std::cout << endl << printCh();	
	return 0;
}

char* printCh(void) {       // Definition 
	std::cout << "Please enter you name:" << std::endl;
	std::cin.getline(buff, 128, '\n');
	std::cout << std::endl << "Your name is: " << buff << std::endl << std::endl;
	return buff;

}