/**
 * @file EXercise-1_pmacdonald1.cpp
 * @author Phillip Macdonald
 * @date 2026-18-10
 * @brief checks if a UPC code is valid or not.
 */
#include <iostream>
#include <string>

using namespace std;

int odd(int arr[])
{
    return (arr[0] + arr[2] + arr[4] + arr[6] + arr[8] + arr[10]) * 3;
}

int even(int arr[])
{
    return arr[1] + arr[3] + arr[5] + arr[7] + arr[9];
}

void solution(int arr[])
{
    cout << "Enter the very first number: ";
    cin >> arr[0];

    for (int i = 1; i < 11; i++)
    {
        cout << "Enter the next number: ";
        cin >> arr[i];
    }

    cout << "Enter the check digit: ";
    cin >> arr[11];
    
    int calc = 10 - ((odd(arr) + even(arr)) % 10);
    if (calc == arr[11])
    {
        cout << "Your number is valid." << endl;
    } else
    {
        cout << "Your number is not valid." << endl;
    }
            
}

int main()
{
    char test;
    int UPC[12];

    cout << "Do you have a number to test? (y or n): ";

    cin >> test;
    while (true)
    {
        if (test == 'y')
        {
            solution(UPC);
            for (int i = 0; i < 12; i++)
            {
                cout << UPC[i];
            }
            cout << endl << "Do you have a number to test? (y or n): ";
            cin >> test;
        } else if (test == 'n')
        {
            cout << "Thanks for using the program";
            break;
        } else
        {
            cout << "Please type either y or n: ";
        
            cin >> test;
        }
    }

    return 0;
}