#include<iostream>
using namespace std ; 

int sum(int a , int b )
{   int s ;
    s = a + b ; 
    return s ;
}




int lowerNumber (int a , int b )
{
    if (a < b)
    { return a ;}
    else 
    { return b ; }
}

int sumN(int n )
{
    int sum = 0 ;
    for(int i = 0 ; i <= n ; i++ )
    {
        sum += i ;
    }
    return sum ;
}

 

int main ()
{ 
    cout << "sum = " << sum( 5 , 3  ) << endl ;
    
    cout << "lower number = "<< lowerNumber( 5 , 1 ) << endl ;

    cout << "sum of N numbers =" << sumN (10) << endl ; 
    return 0 ; 
}