//Written by Raymond Fisher, Guidelines provided by Rocky Mazorow
//Last edited on 04/25/2018

#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	string search = "";
	string payrollCode;
	string salary;
	ifstream intermediateTxt;
	bool isFound = false;
		
	
	cout << "Enter your payroll code: ";
	getline(cin, search);
	
	while (search != "quit" && search != "Quit") {
		intermediateTxt.open("Intermediate24-1.txt");
		if (intermediateTxt.is_open()) {
			while (!intermediateTxt.eof()) {
				getline(intermediateTxt, payrollCode, '#');
				getline(intermediateTxt, salary);
				//cout << payrollCode << " " << salary << endl;
				if (search == payrollCode) {
					cout << "Payroll code: " << salary << endl;
					isFound = true;
				}
			}
			if(!isFound) {
				cout << "Code not found" << endl;
			}
			intermediateTxt.close();
		}
		else {
			cout << "Warning: File could not be opened";
		}
		cout << "Type quit to exit the program: ";
		cout << "Enter your payroll code: ";
		getline(cin, search);
		isFound = false;
	}
}