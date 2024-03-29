// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
float compute_gross_pay(int, float, char); //function prototypesfloat compute_taxes(float);
float compute_net_pay(float, float);
void print_pay_check(string, string, string, string, int, string, int, int, float, float, float);
float compute_federal_tax(float);
float compute_state_tax(float);
float compute_city_tax(float);

int main() {
	//declare variables
	string dummy;
	char parttime_fulltime;
	float payRate = 0;
	float grossPay = 0;
	float netPay = 0;
	float totalTax = 0;
	const string date = "02/16/2016";
	string name;
	string last_name, first_name, street_address, street_name, street_type, city, state;
	int zip, deductions, employee_id, address_num;
	ifstream myfile;
	int x;

	//Read from file.
	myfile.open("intfile.txt");
	//Rest of function: START
	while (!myfile.eof()) {
		myfile >> last_name >> first_name >> deductions >> employee_id >>
			address_num >> street_name >> street_type >> city >> state >> zip >> payRate >> parttime_fulltime; // get employee information
		
		string name = last_name + ", " + first_name;
		string address = to_string(address_num) + " " + street_name + " " + street_type;
		print_pay_check(name, address, city, state, zip, date, 0, 0, netPay, grossPay, totalTax);
	}
	//Rest of function: END

	myfile.close();
	system("pause");
	return 0;
}

//Functions

float compute_gross_pay(int, float, char)
{
	return 0.0f;
}

float compute_net_pay(float, float)
{
	return 0.0f;
}

void print_pay_check(string name, string address, string city, string state, int zip, string date,  
	int, int, float netPay, float grossPay, float totalTax)
{
	cout << "ABC Flowers \n";
	cout << address << string((50-address.length()), ' ') << date << endl;
	cout << city << ", " << state << " " << zip << endl << endl;
	cout << "Payable to: " << name << string(20-name.length(), ' ') << "Pay this amount: $" << netPay << endl;
	cout << string(12, ' ') << address << endl;
	cout << string(12, ' ') << city << ", " << state << " " << zip << endl << endl;
	cout << "Gross Pay  $" << grossPay << endl;
	cout << "Total Taxes  $" << totalTax << endl;


	for (int i = 0; i < 100; i++) {
		cout << "*";
	}
	cout << endl;
}

float compute_federal_tax(float)
{
	return 0.0f;
}

float compute_state_tax(float)
{
	return 0.0f;
}

float compute_city_tax(float)
{
	return 0.0f;
}
