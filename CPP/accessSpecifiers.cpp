/*

public: access throughout the program
protected: access within the class and only by child classes.
private: access within the class itself.

*/

#include <iostream>

class myClassA{
	int dataA;
protected:
	int dataProtected;
	myClassA() {
		this->dataA = 6;   //this is a const pointer.
	}
	void displayA() {
		std::cout << "dataA=" << dataA << std::endl;
	}
};

class myClassB : public myClassA{
	int dataB;

	
public:
	 myClassB(int b) {
		dataB = b;
	}
	void displayB() {
		dataProtected = 4;
		std::cout << "dataProtected=" << dataProtected << std::endl;
		displayA();
		std::cout << "dataB=" << dataB << std::endl;
	}
};
int accessSpecifier()
{
	myClassB objB(3);
	objB.displayB();
	return 0;
}