// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int year;
    bool closeProgram = false;

    while (closeProgram == false) 
    {
        std::cout << "Please enter in a 4 digit year or enter 0 to exit: ";
        std::cin >> year;
        
        if (year == 0) //exit condition set 
        {
            std::cout << "Program closing....\n";
            exit(1);
        }
        if (year > 999 && year < 9999) //4 digit check
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                std::cout << year << " is a leap year\n";
            }
            else
            {
                std::cout << year << " is not a leap year\n";
            }
        }
        else
        {
            std::cout << "That is not a 4 digit year!, try again: \n";
        }
    }
}