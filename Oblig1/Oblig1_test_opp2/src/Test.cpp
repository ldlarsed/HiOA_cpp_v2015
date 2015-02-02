/*
 * Test.cpp
 *
 *  Created on: Feb 2, 2015
 *      Author: luke
 */

#include "Test.h"

using namespace std;


Test::Test() {
	// TODO Auto-generated constructor stub

}

Test::~Test() {
	// TODO Auto-generated destructor stub
}

void Test::sortAndPrintArray(int size, int arr[]){
	sort(arr, arr+size);
	for(int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << endl;
}
