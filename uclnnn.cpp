#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void input_integer(string label, int &n);
int USCLN(int a, int b);
int BSCNN(int a, int b);

int main()
{
    int x;
    int y;
    input_integer("x = ", x);
    input_integer("y = ", y);
    cout << "Uoc so chung lon nhat: ";
    cout << USCLN(x, y);
    cout << "Boi so chung nho nhat la: ";
    cout << BSCNN(x, y);

    return 0;
}

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}

int USCLN(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            return a - b;
        }
        else
        {
            return b - a;
        }
    }
}
int BSCNN(int a, int b)
{
    return (a * b) / USCLN(a, b);
}
