#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

// Declare file stream
ifstream inData;
string fileName;
cout << "Please enter the name of the input file." << endl;
cin >> fileName;

string firstName, lastName;
//Declare Variables
double baseSalary, comissionPercent, sales, expenses, grossPay, comission;

//Open the Files
inData.open(fileName); //open the input file
inData >> firstName >> lastName >> baseSalary >> comissionPercent >> sales >> expenses;
comission = sales*(comissionPercent/100);
grossPay = baseSalary + comission + expenses;

cout << "Payroll Data for " << firstName << " " << lastName << endl;
cout << endl;

cout << "Base Salary :";
cout << setw(10) << right;
cout << baseSalary << endl;

cout << "Comission :";
cout << setw(14) << right;
cout << setprecision(2) << fixed << comission;
cout << " (" << setprecision(1) << fixed << comissionPercent << "% of ";
cout << setprecision(2);
cout << sales << ")" << endl;

cout << "Expenses :";
cout << setw(15) << right;
cout << expenses <<endl;

cout << setw(27) << "--------" << endl;

cout << "Total :";
cout << setw(19) << right;
double total = baseSalary + expenses + comission;
cout << setprecision(2) << fixed << total << endl;


//Close Files
    
    inData.close();
    
    return 0;
  
}
