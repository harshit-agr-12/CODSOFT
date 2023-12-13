#include<iostream>
#include<stdlib.h>
using namespace std;
inline void board();
void update_board(char ch,int chance);
int checkwin(char s[]);
char s[10]={'1','2','3','4','5','6','7','8','9'};
int main()
{
    int chance=0,player,k;
    char ch;
    do
    {
        player=(chance%2)+1;
        system("cls");
        cout<<endl<<"player 1 = X player 2 = O"<<endl<<endl;
        board();
        cout<<player<<" player enter your no. : ";
        cin>>ch;
        update_board(ch,player);
        k=checkwin(s);
        if(k==1)
        {
            cout<<"player "<<player<<" win"<<endl<<endl;
            exit(0);
        }
        else if(k==0)
        {
            cout<<"Draw";
            exit(0);
        }
        chance++;
    }
    while(k==-1);
    board();
    return 0;
}

void board()
{
    cout<<"       |       |       "<<endl;
    cout<<"   "<<s[0]<<"   |   "<<s[1]<<"   |   "<<s[2]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"   "<<s[3]<<"   |   "<<s[4]<<"   |   "<<s[5]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"   "<<s[6]<<"   |   "<<s[7]<<"   |   "<<s[8]<<"   "<<endl;
    cout<<"       |       |       "<<endl;
    cout<<"       |       |       "<<endl;
}

void update_board(char ch,int player)
{
    int i;
    for(i=0;i<9;i++)
            if(s[i]==ch)
            {
                if(player==1)
                    s[i]='X';
                else
                    s[i]='O';
            }

}

//check the win 

int checkwin(char s[])
{
    if(s[0]==s[1] && s[1]==s[2])
        return 1;
    else if(s[3]==s[4] && s[4]==s[5])
        return 1;
    else if(s[6]==s[7] && s[7]==s[8])
        return 1;
    else if(s[0]==s[3] && s[3]==s[6])
        return 1;
    else if(s[1]==s[4] && s[4]==s[7])
        return 1;
    else if(s[2]==s[5] && s[5]==s[8])
        return 1;
    else if(s[0]==s[4] && s[4]==s[8])
        return 1;
    else if(s[2]==s[4] && s[4]==s[6])
        return 1;
    else if(s[0]!='1' && s[1]!='2' && s[2]!='3' && s[3]!='4' && s[4]!='5' && s[5]!='6' && s[6]!='7' && s[7]!='8' && s[8]!='9' )
        return 0;
    else 
        return -1;
}