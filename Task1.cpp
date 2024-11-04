#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, num;
    cout << "\nEnter any number: ";
    cin >> num;
    a = isPrime(num);
    cout << a << endl;
    return 0;
}