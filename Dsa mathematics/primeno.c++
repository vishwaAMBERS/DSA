#include<iostream>
using namespace std ;

string isPrime (int n)
{
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            return "non Prime";
        }
    }
    return "Prime" ;
}

int main()
{
    int n = 42 ;

    cout << isPrime(n) << endl ;
    return 0 ;
}