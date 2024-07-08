// CPP_FIBONACCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fibbonacii(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
    {
        for (int i = 2; i < n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }return fn;
    }
}
int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibbonacii(i) << " ";
    }
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
