#include<iostream>
using namespace std ;

int main (){
    int u ;
    cout<<"enter an number\n";
    cin>>u;
    if (u%2 == 0){
        cout<<"even number\n";
    }else {
        cout<<"odd number\n";
    }
    

    if (u>= 0)
    {
        cout<<"n is positive\n";
    }
    else
    {
        cout<<"negative" <<endl ;
    }

    int marks ;
    cout <<"enter number\n";
    cin >> marks;
    if (marks >=90){
        cout << "A\n";
    }else if(marks>=80 && marks<90){
        cout <<"B\n";
    }else{
        cout<<"C\n";
    }


    char c ;
    cout <<"enter caracter";
    cin >> c ;
    

    if (c >= 65 && c <= 90){
        cout << "letter is upper case";
    }else{
        cout << "letter is lower case";
    }


    
    return 0 ;
}

