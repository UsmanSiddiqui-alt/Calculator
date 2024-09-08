#include<iostream>
using namespace std;
int main()
{
    int choice;
    double num1,num2,result;

    cout<<"Simple Calculator";
    cout<<"\n1. Addtion";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n5. Exit";

    while (true)
    {
        cout<<"\nEnter your choice: ";
        cin>>choice;
        if(choice==5){break;
        }
        cout<<"\nEnter first number: ";
        cin>>num1;
        cout<<"\nEnter second number: ";
        cin>>num2;
        switch(choice){
            case 1:
            result=num1+num2;
            cout<<"\nResult: "<<num1<<"+"<<num2<<"="<<result;
            case 2:
            result=num1-num2;
            cout<<"\nResult: "<<num1<<"-"<<num2<<"="<<result;
            case 3:
                result=num1*num2;
                cout<<"\nResult: "<<num1<<"*"<<num2<<"="<<result;
            case 4:
                if(num2!=0){
                result=num1/num2;
                cout<<"\nResult: "<<num1<<"/"<<num2<<"="<<result;}
                else{cout<<"\nThe second number is 0";
                }
            break;
            default:
                cout<<"\nInvalid choice";

        }

    }
    return 0;
}

