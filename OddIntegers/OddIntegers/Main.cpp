#include <iostream>
using namespace std;

//Program: OddItegers
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Program that calculates and displays the sum of odd
//integers from 1 to 15.


int main()
{
	//declare variables
	int iSum = 0;

	//for loop
	for (int x = 1; x <= 15; x = x + 2)
	{
		iSum = iSum + x;
	}
	cout << "The sum is: " << iSum << endl;

	return 0;
}