/*
Smart Pointers in C++  in #include <memory>

1. Unique Pointer    cannot copy or share this
	is for unique ownership
	
2. Shared Pointer
	is for shared ownership

3. Weak Pointer
	is for no ownership
	It is reference to an object which is managed by shared pointer
	we have to convert to shared pointer in order to access the managed object
	It is used to remove cyclic dependency between shared pointers.


*/

#include <memory>
#include <iostream>

class Entity {
public:
	Entity() {
		std::cout << "Created Entity" << std::endl;
	}
	~Entity() {
		std::cout << "Destroyed Entity" << std::endl;
	}
	void Print() {
		std::cout << "print function" << std::endl;
	}
};
int smartPointers() {
	{
		std::unique_ptr<Entity> p = std::make_unique<Entity>();
		p->Print();
	}
	std::shared_ptr<Entity> e0;
	{
		std::shared_ptr<Entity> p = std::make_shared<Entity>();
		p->Print();
		e0 = p;
	}
	{
		std::weak_ptr<Entity> p = e0;
		//p->Print();
	}
	return 0;
}
