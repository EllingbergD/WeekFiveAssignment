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
void print_pay_check(string, string, string, int, string, string, string, string, int, float, float, float);
float compute_federal_tax(float);
float compute_state_tax(float);
float compute_city_tax(float);

int main() {
	//declare variables
	string dummy;
	char parttime_fulltime;
	float payRate;
	float grossPay;
	float netPay;
	float totalTax;
	const string date = "02/16/2016";
	string last_name, first_name, street_address, street_name, street_type, city, state;
	int zip, deductions, employee_id, address_num;
	ifstream myfile;
	int x;

	//Read from file.
	myfile.open("intfile.txt");
	myfile >> last_name >> first_name >> deductions >> employee_id >> 
		address_num >> street_name >> street_type >> city >> state >> zip >> payRate >> parttime_fulltime; // get employee information
	cout << last_name;
																										   //cout << last_name;
	//Rest of function: START
	//while (!myfile.eof()) {
	//
	//}
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

void print_pay_check(string, string, string, int, string, string, string, string, int, float, float, float)
{
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
