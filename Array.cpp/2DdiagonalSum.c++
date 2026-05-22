#include<iostream>
using namespace std ;

int diagonalSum(int mat[][4], int n)
{
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i==j)
            {
                sum+= mat[i][j] ;
            }
            else if (j == n-j-1)
               sum += mat[i][j] ;
        }
    }return sum ;
}

int diagonalSum2(int mat[][4] , int n )
{
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(i != n-i-1)
        {
            sum+=mat[i][n-i-1];
        }
    }return sum ; 

}

int main ()
{
    int matrix [4][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    int n = 4 ;

    cout << diagonalSum(matrix , 4 ) << endl ;
    cout << diagonalSum2(matrix , 4 ) << endl ; 
    return 0;
}
