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
	virtual void display(){
		std::cout << "display() of class A"<<std::endl;
	}

};

class B :  public A{
public:
	void display() {
		std::cout << "display() of class B"<<std::endl;
	}
};

int virtualFunction() {
	A* a;
	B b;
	a = &b;
	a->display();
	return 0;
}