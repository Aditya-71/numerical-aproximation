#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void printColor(const string &text, int colorCode)
{
    cout << "\033[" << colorCode << "m" << text << "\033[0m";
}

void printHeader()
{
    cout << "\033[1;34m";
    cout << "==========================================================\n";
    cout << "     Numerical Ninjas: A Numerical Approximation Tool     \n";
    cout << "==========================================================\n";
    cout << "\033[0m";
}

void printMenu()
{
    cout << "\033[1;32m";
    cout << "Choose the method you want to run:\n";
    cout << "\033[0m";
    cout << "\033[1;36m";
    cout << "1. Bisection Method\n";
    cout << "2. Secant Method\n";
    cout << "3. Newton Raphson Method\n";
    cout << "\033[0m";
    printColor("Enter your choice (1-3): ", 33);
}

int main()
{
    int choice;

    printHeader();
    printColor("\nWelcome to Numerical Ninjas, where we solve equations like a pro!\n", 36);
    printColor("This tool offers various numerical methods to approximate solutions.\n", 36);
    printColor("Select a method from the menu below to get started.\n\n", 36);
    printMenu();

    cin >> choice;

    switch (choice)
    {
    case 1:
        system("01bisection.exe");
        break;
    case 2:
        system("02secant.exe");
        break;
    case 3:
        system("03newtonraphson.exe");
        break;
    default:
        printColor("\nInvalid choice! Please run the program again and choose a number between 1 and 3.\n", 31);
        return 0;
    }

    printColor("\nThank you for using Numerical Ninjas. Have a great day!\n\n", 32);

    return 0;
}
