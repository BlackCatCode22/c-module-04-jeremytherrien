// ctimePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 9/30/24

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <sstream> 
#include <chrono>
using namespace std; 

int main()
{
  
	cout << "Welcome to time and date practice " << endl; 
	// Get the current time 
	time_t now = time(0); 


	// Convert to my local system time. 
	char* pCtime = ctime(&now); 
	cout << "My system time is " << pCtime << endl; 

	// Use the proper members of the tm struct to get 2024-09-30

	// Get the current time 
	time_t currentTime = time(0); 

	
	// Convert the current time to local time structure 
	tm* localTime = localtime(&currentTime); 

	//
	string arrivalDate = ""; 

	// Print the date in the format YYYY-MM-DD
	cout << (1900 + localTime->tm_year) << "-"
		<< setw(2) << setfill(0) << localTime->tm_mon + 1 << "-"
		<< setw(2) << setfill(0) << localTime->tm_mday << endl; 


	ostringstream oss;
	oss << (1900 + localTime->tm_year) << "-"
		<< setw(2) << setfill(0) << (localTime->tm_mon + 1) << "-"
		<< setw(2) << setfill(0) << localTime->tm_mday; 

	// 
	string arrivalDate = oss.str(); 

	// Output the arrival date
	cout << "Arrival Date: " << arrivalDate << endl; 

	// Here is the C++ code using <chrono>
	// Get the current time from the system clock

	// Get the current time from the system clock
	auto currentTime02 = chrono::system_clock::now(); 

	// Convert the time to a time_t object, which represents the time in seconds 
	time_t timeNow = chrono::system_clock::to_time_t(currentTime02); 


	// Convert to local time structure 
	tm localTime02 = *localtime(&timeNow); 


	// Use ostringstream to fromat the date into a string 
	ostringstream dateStream02; 
	dateStream02 << put_time(&localTime02, "%Y-%m-%d"); 


	string arrivalDateChrono = dateStream02.str(); 

	cout << "Arrival Date using chrono: " << arrivalDateChrono << endl; 

	return 0; 
}

