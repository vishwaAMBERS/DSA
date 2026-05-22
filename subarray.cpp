#include<iostream>
using namespace std ;

int main()
{
    int arr[] ={5 , 6 , 2 , 3 , 7 , 8};
    int n = 6 ;
    for (int st=0 ; st<n ; st++)
    {
        for(int end=st ; end<n ; end++)
        {
            for(int i=st ; i<=end ; i++)
            {
                cout << arr[i] ;
            }cout << " ";
        }cout << endl ;
    }return 0 ; 
}