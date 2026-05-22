#include<iostream>
#include<climits>
using namespace std ;

bool linearSearch(int mat[][3] ,int rows , int cols , int key)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if(mat[i][j]== key)
            {
                return true ;
            }
        }
    }return false ;
}

int getMaxSum(int mat[][3] , int rows , int cols )
{
    int maxRowSum = INT_MIN ;
    
    for(int i = 0 ; i < rows ; i++)
    {
        int rowSumI = 0 ;
        for (int j = 0 ; j < cols ; j++)
        {
            rowSumI += mat[j][i];
        }
        maxRowSum = max(maxRowSum , rowSumI) ;
    }
    return maxRowSum ;
}

int main ()
{
    int matrix [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3 ;
    int cols = 3 ;

    cout << linearSearch(matrix , rows , cols , 51 ) << endl ;
    cout << getMaxSum (matrix , cols , rows ) << endl ;
    return 0;
}