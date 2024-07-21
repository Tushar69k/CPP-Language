#include <iostream>
using namespace std;

int main()
{

    int num;
    int sum = 0;

    cout << "Enter Multiplication Table number to calculate Sum of numbers in Multiplication Table :  ";
    cin >> num;
    int repo = num * 10;

    for (int i = 1; i <= repo; i++)
    { // convert i++ -> i+=num; & i = 0
        if (i % num == 0)
        { // this will be removed after above changes
            sum = sum + i;
            //                System.out.println(i);
        }
    }

    cout << "Sum of numbers in Multiplication Table of " << num << " upto 10 is : " << sum;

    return 0;
}