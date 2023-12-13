#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n1,n2,ch;
    cout<<"Enter Two Number";
    cin>>n1>>n2;
    while(1)
    {
        cout<<endl<<"Enter your choice"<<endl;
        cout<<endl<<"1.Enter 1 for addition"<<endl;
        cout<<"2.Enter 2 for subtraction"<<endl;
        cout<<"3.Enter 3 for multipliction"<<endl;
        cout<<"4.Enter 4 for division"<<endl;
        cout<<"5.Enetr 5 for exit "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: 
            {
                cout<<"The addition is: "<<n1+n1<<endl;
                break;
            }
            case 2:
            {
                cout<<"The subtaction is: "<<n1-n2<<endl;
                break;
            }
            case 3:
            {
                cout<<"The multiplication is: "<<n1*n2<<endl;
                break;
            }
            case 4:
            {
                cout<<"The division is: "<<n1/n2<<endl;
                break;
            }
            case 5:
            {
                cout<<"exit";
                exit(0);
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }

    }
    return 0;
}