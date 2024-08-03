 #include <iostream>
using namespace std;

void getArr(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Element " << (i + 1) << " : ";
        cin >> arr[i];
    }
}

void printArr(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Element " << (i + 1) << " : " << arr[i] << endl;
    }
}

int main()
{
    int array[4];
    getArr(array);
    printArr(array);

    return 0;
} 