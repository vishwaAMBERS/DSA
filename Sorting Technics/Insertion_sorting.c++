#include<iostream>
using namespace std ;

void insertionSort (int arr[] , int n )
{
    for (int i = 0 ; i < n-1 ; i++)
    {
        int curr = arr[i];
        int prev = i-1 ;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev+1] = arr[prev] ;
            prev-- ; 
        }
        arr[prev+1] = curr ;
    }
}

void printArray (int arr[] , int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] <<" " ;
    }
    cout << endl ; 
}

int main ()
{
    int n = 6 ;
    int arr[] = {1 , 2 ,5 , 6, 7 ,8}; 
    insertionSort (arr , n) ;
    printArray (arr , n );
    return 0 ;
}