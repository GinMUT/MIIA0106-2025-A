// Test01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    // Different kinds of string data to demonstrate using std::cout with multiple types
    std::cout << "Hello World!\n";
    std::cout << "Hello LAB2!\n";
    
    const char* name_cstr = "Sutit Ongart";
    std::string course = "MIIA0106";
    char email_arr[] = "6811830012@mut.ac.th";

    std::cout << "Name: " << name_cstr << '\n';
    std::cout << "Course: " << course << '\n';
    std::cout << "Email: " << email_arr << '\n';

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
