#include<iostream>
#include<climits>
using namespace std ;

int linearSearch (int arr[] , int sz , int target)
{
    for (int i = 0 ; i < sz ; i++)
    {
        if (arr[i] == target)
        {
            return i ;
        }
    }
    return -1 ;
}

void reverseArray(int arr [] , int sz)
{
    int start = 0 , end = sz-1 ; 
    while (end > start )
    {
        swap (arr[start] , arr[end]);
        start++;
        end--;
    }
}
int main ()
{
    int arr[] ={5 , 6 , 8 , 2 , 47 , 7 , 4 };
    int sz= 7 ;
    int target = 8 ;
    cout << linearSearch(arr , sz ,target ) << endl ; 
    reverseArray (arr , sz) ;
    for (int i =  0 ; i < sz ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    return 0 ;
}    
