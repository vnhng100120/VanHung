#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
int cows,bulls,i,s,c,d;
char guess[4],word[4];
clrscr();
printf("Player 1,enter the letters of your word.");
for(i=1;i<=4;i++)
    {
    scanf("%c",&word[i]);
    }
clrscr();
printf("Player2, please get ready");
for(i=1;i<=10;i++)
{
    bulls=0;cows=0;
    printf("\nEnter Guess %d:",i);
    for(c=1;c<=4;c++)
        {
        scanf("%c",&guess[c]);
        }
    for(d=1;d<=4;d++)
        {
        if(guess[d]==word[d]) bulls++;
        else {
            for(s=1;s<=4;s++)
            {
            if(guess[d]==word[s]) cows++;
            }
             }
        }
if(bulls==4) printf("You are Victorious");
printf("Bulls = %d, Cows = %d",bulls,cows);
}
getch();
}
