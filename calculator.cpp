#include <iostream>
using namespace std;

int main(){
    cout<<"This program can only operate on two numbers only at once"<<'\n';
    char a;
    while(true){
    cout<<"Which operation do you want to perform?(+,-,*,/,%): "; cin>>a; cout<<'\n';

    if (a=='+'){
        float a,b;
        cout<<"Enter first number to add: "; cin>>a; cout<<'\n';
        cout<<"Enter second number to add: "; cin>>b; cout<<'\n';
        cout<<"The sum of the numbers is "<<a+b<<'\n';
    }

    else if (a=='-'){
        float a,b;
        cout<<"Enter number to be subtracted from: "; cin>>a; cout<<'\n';
        cout<<"Enter number to be subtracted: "; cin>>b; cout<<'\n';
        cout<<"The result is "<<a-b<<'\n';
    }

    else if (a=='*'){
        float a,b;
        cout<<"Enter first number to multiply: "; cin>>a; cout<<'\n';
        cout<<"Enter second number to multiply: "; cin>>b; cout<<'\n';
        cout<<"The product of the numbers is "<<a*b<<'\n';
    }

    else if (a=='/'){
        float a,b;
        cout<<"Enter the dividend: "; cin>>a; cout<<'\n';
        cout<<"Enter the divisor: "; cin>>b; cout<<'\n';
        cout<<"The result is "<<a/b<<'\n';
    }
    else if (a=='%'){
        int a,b;
        cout<<"Enter the dividend: "; cin>>a; cout<<'\n';
        cout<<"Enter the divisor: "; cin>>b; cout<<'\n';
        cout<<"The remainder is "<<a%b<<'\n';
    }

    else{
        cout<<"Please enter a valid choice"<<'\n';
        continue;
    }

    char c1;
    cout<<"Do you want to continue?(Y for yes, any other key for no): "; cin>>c1; cout<<'\n';
    if(c1!='Y' && c1!='y'){
        cout<<"Thank you for using the calculator!";
        break;
    }
    }
    return 0;
}