#include <iostream>
#include <math.h>

using namespace std;

void generate_numders(int m)// m - длина 
{
    static int digit[100];
    static int n = 3;//n-ичная система исчисления (n<=10)  <<-- указываем здесь
    static int top = 0;//сколько элементов уже сгенерированно
    if (m == 0)
    {
        for (int i = 0; i < top; i++)
        {
            cout << digit[i];
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            digit[top] = i;
            top++;
            generate_numders(m - 1);
            top--;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    int m = 3; // m - длина <<-- указываем здесь
    generate_numders(m);
    cout << "\n";
    system("PAUSE");
    return 0;
}