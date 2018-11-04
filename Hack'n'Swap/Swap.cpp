//Creator Information
/*
Name: Hunter Derrick
Professor Name: Tony Hinton
Start Date: 11/04/2018
Complete Date: 11/04/2018
Project Name: Swap
Class: CSC215 @ UAT
*/


//Include the necessary PreProcessor Directives.
#include<iostream>

//Add necessary Namespaces
using namespace std;

//Function: Initializes variables, and sets funding equal to said variables.
void BadSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
//Function:References the funding types and amounts, and showcases a swap.
void GoodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}


int main()
{
	int joesFunding = 1000;
	int hackerFunding = 100000;

	cout << "Joe's Coffee Shop Original Earnings Statement: " << joesFunding << "\n";
	cout << "Hackers Original Funding :" << hackerFunding << "\n";

	cout << "Initiating the Swap.\n\n";
	BadSwap(joesFunding, hackerFunding);
	cout << "Joe's Shop Funding: " << joesFunding << "\n";
	cout << "Hacker's funding: " << hackerFunding << "\n";

	cout << "Finalizing the Swap.\n\n";
	GoodSwap(joesFunding, hackerFunding);
	cout << "Joe's Shop Funding: " << joesFunding << "\n";
	cout << "Hacker's funding: " << hackerFunding << "\n";

	system("pause");
	return 0;
}

