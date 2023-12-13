#include<iostream>

#include<time.h>

using namespace std;

int main()
{
    cout<<endl<<"********** Number Guessing Game**********"<<endl;
    cout<<endl<<"Guess the number between between 1 to 100 "<<endl;
    
    //N=number which the user will enter to guess
    //R=random number which is to be guessed

    int N,R;

    //this function will generate a random no. 
    srand(time(0));
    R=rand()%100+1;

    cout<<endl<<"Guess no."<<endl;

    do{

        cout<<"Enter yor choice"<<endl;
        cin>>N;

        if(N>R)
            cout<<"high"<<endl;
        else if(N<R)
            cout<<"Low"<<endl;
        else
            cout<<"Correct guess"<<endl;
    }

    //checking the condition if number is not no. to random number loop again loop will run 

    while(R!=N);

    return 0;
}