#include <iostream>
#include "MyArray.h"

using namespace std;
int main()
{
	int arr[] = { 4,6,7,2,4 };
	MyArray arr1;
	MyArray arr2 = { 20 };
	MyArray arr3 = { 5,arr};

	arr1.printArray();
	arr2.printArray();
	arr3.printArray();
	return 0;
}
