#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num == 1)
        return 1;

    return num*factorial(num-1);
}
void sum(int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        if(i %2 == 0)
        {
            cout<<i<<endl;
        }
    }
}

int multiply(int n1, int n2)
{
    return n1*n2;
}

int main()
{
    cout << factorial(10) << endl;

    cout << multiply(10,10) << end;

    sum(10000);

    return 0;
}
