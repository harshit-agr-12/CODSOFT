#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int i,r;
    srand(time(0));
    r=rand();
    cout<<"Guess no."<<endl;
    do{
        cout<<"Enter yor choice"<<endl;
        cin>>i;
        if(i>r)
            cout<<"high"<<endl;
        else if(i<r)
            cout<<"Low"<<endl;
        else
            cout<<"Correct guess"<<endl;
    }
    while(r!=i);
    return 0;
}