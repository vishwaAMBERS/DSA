#include<iostream>
using namespace std ;

void changeA(int &b)
{
    b = 20 ;
}
int main ()
{
    int a = 20 ;
    changeA(a);
    cout <<"Inside main function : " <<a << endl ;
    return 0 ;

}