//TryThis17.cpp - saves numbers from 10 through
//25, along with the square of each number,
//in a sequential access file
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
	ofstream outNumbers;
	outNumbers.open("TryThis17.txt");

	if (outNumbers.is_open())
	{
		for (int x = 10; x < 26; x += 1)
			outNumbers << x << '#' 
				<< pow(x, 2.0) << endl;
		//end for
		outNumbers.close();
	}
	else
		cout << "The file could not be opened."
			<< endl;
	//end if

	system("pause");
	return 0;
}	//end of main function
