/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
    int num1,num2;
    char op;
    cout<<"                                        !!!Calculator!!!\n\n";
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Result:"<<endl;
    switch(op){
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
        	if(num2==0){
        		cout<<"Invalid Division";
        		break;
			}
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            
            break;
        default:
            
            cout << "Error! The operator is not correct";
            break;
    }
    return 0;
}

