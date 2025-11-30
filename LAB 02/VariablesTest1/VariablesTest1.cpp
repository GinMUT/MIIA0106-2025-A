// VariablesTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
    
int main()
{
    // Declare variables with appropriate types
    std::string name = "Chattarin Dipracha ";   // Name (string)
    int age = 20;                      // Age (int)
    std::string studentId = "6811830012";         // Student ID (string)
    double gpa = 3.63;                         // GPA (double)

    // Header
    std::cout << "========== Student Info ===========" << '\n';

    // Aligned output: label field width = 14, colon aligned
    std::cout << std::left << std::setw(14) << "Name"       << " : " << name << '\n';
    std::cout << std::left << std::setw(14) << "Age"        << " : " << age << '\n';
    std::cout << std::left << std::setw(14) << "Student ID" << " : " << studentId << '\n';
	std::cout << std::left << std::setw(14) << "GPA" << " : " << std::fixed << std::setprecision(2) << gpa << '\n';
    std::cout << "===================================" << '\n';



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
