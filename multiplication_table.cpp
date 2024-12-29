#include<iostream>
using namespace std;

int main(){
    int a,b,i;
    cout<<"Which number's multiplication table do you want?: "; 
    cin>>a;
    cout<<'\n';
    cout<<"How many multiples do you want?: "; 
    cin>>b;
    cout<<'\n';
    cout<<"The multiplication table is as follows:"<<'\n';
    i=1;
    while(i<=b){
        cout << a <<" X " << i << " = " << a*i <<'\n';
        i++;
    }
    return 0;
}