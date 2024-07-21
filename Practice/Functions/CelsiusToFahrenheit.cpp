#include <iostream>
using namespace std;

double CelToFerh(double Cel)
{
    return ((Cel * 9) / 5) + 32;
}

double FerhToCel(double Ferh)
{
    return ((Ferh - 32) * 5) / 9;
}

int main()
{
    int button;
    cout << ":: Program to Convert °C to °F and °F to °c ::\n" ;
    cout << " 1. Converting Celsius to Fahrenheit "<<endl;
    cout << " 2. Converting Fahrenheit to Celsius "<<endl;
    cout << " 3. Both  "<<endl;
    cout << " 4. Ending Program "<<endl;
    do
    {
        cout << "\nEnter Condition no. from above to perform Calculation : ";
        cin >> button;

        switch (button)
        {
        case 1:
            cout << "Enter Celsius Degree : ";
            double cel;
            cin >> cel;
            cout << cel << "° C = " << CelToFerh(cel) << "° F";
            break;

        case 2:
            cout << "Enter Fahrenheit Degree : ";
            double fah;
            cin >> fah;
            cout << fah << "° F = " << CelToFerh(fah) << "° C";
            break;

        case 3:
            cout << "Enter Celsius Degree: ";
            cin >> cel;
            cout << cel << "° C = " << CelToFerh(cel) << "° F";
            cout << "Enter Fahrenheit Degree : ";
            cin >> fah;
            cout << fah << "° F = " << FerhToCel(fah) << "° C";
            break;

        case 4:
            cout << " Program Ended ";
            break;

        default:
            cout << "Brother , There are only 4 Conditions, Which Condition no. have you written? ";
            break;
        }
    } while (button != 4);
    return 0;
}

// Formula :- (°C × 9)/5 + 32 = °F
// (°C × 9/5) + 32 = °F
//(°F − 32) x 5/9 = °C