// Simple Calculator Project using C++
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // Declaration
    double num1,num2;
    char operation,redo;

    // Welcome Line
    cout<<"Welcome to the calculater program v.1.0 written by Mohan Lal Rathore"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<endl;

    // Here do While loop is used so that the program can be used more then one time
    //without exiting the run screen
    do
    {
        // Taking the inputs
        cout<<" Please enter an operation which you want to calculate (+,-,*,/,s)";
        cout<<"[s stands for swap]:";
        cin>>operation ;
        cout<<endl;

        cout<<" Please enter two numbers to apply your requested operation(";
        cout<<operation<<"):"<<endl<<"1st num:";
        cin>>num1;
        cout<<"2nd num:" ;
        cin>>num2;
        cout<<endl;

        // Used switch function so that the operater can be decided
        switch (operation)
        {
        	// Calculating the requested equation for inputs
        	// At the same time printing the results on screen
        	case'+':
            		cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
            		cout<<num1+num2<<endl;
            		break;
        	case'-':
            		cout<<"The substraction of two numbers ("<<num1<<","<<num2<<"):";
            		cout<<num1-num2<<endl;
            		break;
        	case'*':
            		cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
            		cout<<num1*num2<<endl;
            		break;
        	case'/':
            		cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
            		if(num2==0)
            		{
                		cout<<"not valid"<<endl;
           		}
            		cout<<(num1/num2)<<endl;
            		break;
        	case's':
            		cout<<"The swap of two numbers ("<<num1<<","<<num2<<"):";
            		swap(num1,num2);
            		cout<<"1stnumber="<<num1<<"and 2nd number="<<num2<<endl<<endl;
            		break;
        		default:
            		cout<<"unknown command"<<endl;

        }

        // Now once again the program will ask the user if want to continue or not
        cout<<"Enter y or Y to continue:";
        cin>>redo;
        cout<<endl<<endl;
    } while(redo=='y'||redo=='Y');

    return 0;

}


/*
* Output >>
*	Welcome to the calculater program v.1.0 written by Mohan Lal Rathore
*	********************************************************************
*
*	Please enter an operation which you want to calculate (+,-,*,/,s)[s stands for swap]:+
*
*	Please enter two numbers to apply your requested operation(+):
*	1st num:10
*	2nd num:20
*
*	The addition of two numbers (10,20):30
*	Enter y or Y to continue:
*/
