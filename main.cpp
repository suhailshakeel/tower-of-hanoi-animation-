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

int main()
{
    cout << factorial(10) << endl;
    sum(10000);
    return 0;
}
