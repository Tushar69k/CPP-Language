#include <iostream>
using namespace std;

int main()
{
    float income;

    cout << "Enter your Income in Lakhs per annum : ";
    cin >> income;

    float tax = 0;

    if (income <= 2.5f)
    {
        tax = tax + 0;
        cout << "The tax for Income " << income << " is : " << tax;
    }

    else if (income > 2.5f && income <= 5.0f)
    {
        tax = tax + 0.05f * (income - 2.5f);
        cout << "The tax for Income " << income << " is : " << tax;
    }

    else if (income > 5.0f && income <= 10.0f)
    {
        tax = tax + 0.05f * (5.0f - 2.5f);
        tax = tax + 0.2f * (income - 5.0f);
        cout << "The tax for Income " << income << " is : " << tax;
    }
    
    else if (income > 10.0f)
    {
        tax = tax + 0.05f * (5.0f - 2.5f);
        tax = tax + 0.2f * (10.0f - 5.0f);
        tax = tax + 0.3f * (income - 10.0f);
        cout << "The tax for Income " << income << " is : " << tax;
    }

    return 0;
}