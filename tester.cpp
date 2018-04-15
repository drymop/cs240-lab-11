#include <iostream>
#include "LinkedList.h"

using namespace std;

// Tuan Le - tl3fx
// Jimmy Odell - jo6kg

int main(int argc, char const *argv[])
{

	LinkedList<int> list;
        
	// Test empty constructor
	cout << "Create empty LinkedList" << endl;
	cout << "Size: " << list.size() << " [0]" << endl << endl;

	// Test add
	cout << "Add 11, 22, 33 in that order" << endl;
	list.add(11);
	list.add(22);
	list.add(33);
	cout << "Size: " << list.size() << " [3]" << endl;
	cout << "Get: " << list.get(0) << "," << list.get(1) << "," << list.get(2) << " [11,22,33]" << endl << endl;
	
	// Test get exception
	cout << "Get 10th element: ";
	try {
		cout << list.get(10) << " [expect exception]" << endl << endl;
	} catch (std::invalid_argument& e) {
		cout << "Exception as expected: " << e.what() << endl << endl;
	}

	// Test += 
	cout << "Operator += 44" << endl;
	list+= 44;
	cout << "Size: " << list.size() << " [4]" << endl;
	cout << "Get: " << list.get(0) << "," << list.get(1) << "," << list.get(2) << "," << list.get(3) << " [11,22,33,44]" << endl << endl;

	//Adds the value 5 to the LinkedList then checks to see if the size and get methods call the value
        l.add(5);
	std::cout << "Expected Size: 1" << std::endl << "Actual: " << l.size() << std::endl;
	std::cout << "Expected First Value: 5" << std::endl 
		  << "Actual First Value: " << l.get(0) << endl;

	// Test remove
	cout << "Remove 0th element" << endl;
	list.remove(0);
	cout << "Size: " << list.size() << " [3]" << endl;
	cout << "Get: " << list.get(0) << "," << list.get(1) << "," << list.get(2) << " [22,33,44]" << endl << endl;

	cout << "Remove -1th element: ";
	try {
		cout << list.remove(-1) << " [expect exception]" << endl << endl;
	} catch (std::invalid_argument& e) {
		cout << "Exception as expected: " << e.what() << endl << endl;
	}

	// Test toArray
	cout << "To array: ";
	vector<int> vec = list.toArray();
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ",";
	cout << " [22,33,44,]" << endl << endl;

	return 0;
}
