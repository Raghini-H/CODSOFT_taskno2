#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    char ch;
    cout<<"Enter the operation to perform(+,-,*,/): ";
    cin>>ch;
    switch(ch){
        case '+':
            cout<<"Addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
            break;
        case '-':
            cout<<"Subtraction of "<<x<<" and "<<y<<" is "<<x-y<<endl;
            break;
        case '*':
            cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
            break;
        case '/':
            if(y==0){
                cout<<"Error: Denominator is Zero"<<endl;
            }
            else{
                cout<<"Division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
                break;
            }
        default:
            cout<<"Invalid operator"<<endl;
    }
}