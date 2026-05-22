// #include<iostream>
// using namespace std ;

// int main()
// {
//     int n = 4 ;
//     int num = 1;
//     for (int i = 0 ; i < n ; i++)
//     {
//         for (int j = i+1 ; j > 0 ; j--)
//         {
//             cout << num << " " ;
//             num ++ ;
//         }
//         cout << endl ; 
//     }  
//     return 0 ; 
// }





// inverted triangle pattern
// #include<iostream>
// using namespace std ;

// int main ()
// {
//     int n = 4 ; 
//     int num = 1 ;
    
//     for (int i = 0 ; i < n ; i++ )
//     {
//         for(int j = 0 ; j < i ; j++)
//         {
//             cout <<"  ";
//         }
//         for(int j = 0 ; j < n-i ; j++)
//         {
//             cout << (i+1) << " ";
        
//         }cout << endl ; 
//     }
// }




#include<iostream>
using namespace std ;
int main ()
{
    int n = 4 ; 
        
     for (int i = 0 ; i < n ; i++)
     {char ch = 'A';
     for (int j = 0 ; j < i ; j++)
        {
            cout << " ";
        }
        for (int j = 0 ; j < n-i ; j++)
        {
            cout << ch ;
            ch = ch + 1 ;
        }
        cout << endl;
        
    }
     return 0 ; 
}