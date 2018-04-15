#include <iostream>
#include "LinkedList.h"

int main(int argc, char const *argv[])
{
	LinkedList<int> l;
        
	//Tests size method on empty LinkedList
	std::cout << "Expected Size: 0" << std::endl << "Actual: " << l.size() << std::endl << std::endl;\

	//Adds the value 5 to the LinkedList then checks to see if the size and get methods call the value
        l.add(5);
	std::cout << "Expected Size: 1" << std::endl << "Actual: " << l.size() << std::endl;
	std::cout << "Expected First Value: 5" << std::endl 
		  << "Actual First Value: " << l.get(0) << endl;

	//Tests remove then after the value is removed test to see the LinkedList is empty
	l.remove(0);
	std::cout << "Expected Size: 0" << std::endl << "Actual: " << l.size() << std::endl;


	return 0;
}
