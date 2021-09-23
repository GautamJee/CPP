/*

virtual <return_type> func(){      //virtual function
----
----
}

virtual <return_type> func()=0;   //pure-virtual function

*/

#include <iostream>
class A {
public:
	virtual void display() = 0;		//force other classes to declare their own code

};

class B :  public A{
public:
	void display() override{
		std::cout << "display() of class B"<<std::endl;
	}
};

int main() {
	A* a;
	B b;
	a = &b;
	a->display();
	return 0;
}