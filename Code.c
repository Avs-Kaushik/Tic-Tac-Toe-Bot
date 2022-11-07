// Online C compiler to run C program online
/*
    Project Name:TIC-TAC-TOE Bot
    Dev-AVS KAUSHIK
    <---Dont copy without permission--->
    Copyright  ©2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ran(int l,int u)
{
    int num;
    num = (rand()%(u-l+1))+l;
        return num;
}
int main() {
    // Write C code 
    srand(time(0));
    int i,j,k,t,s,d,r;
    int a[3][3]={0};
    char c;
    printf("----->Welcome to TIC TAC TOE game<-----\n");
    printf("\n");
    t=0;
    printf("Select any one from this-> X O..\n");
    printf("Note: X starts the game\n");
    scanf("%c",&c);
    if(c=='X'||c=='x')
    printf("You selected X\n");
    else if(c=='O'||c=='o')
    printf("You selected O\n");
    else
    {
    printf("Sorry wrong selction!!  Selcting X by default.....\n");
    c='X';
    }
     printf("Always remember!! This is the grid view of the TIC-TAC-TOE box\n");
    printf("\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d ",3*i+j-3);
            if(j!=3)
            printf("| ");
        }
        printf("\n");
        if(i!=3)
        printf("---------\n");
    }
    printf("\n");
    printf("In order to put your symbol in the respected grid just type the grid no-> for eg: 5   ..... This puts your symbol in the 5th marked grid \nIn order to win the game you must have to put your 3 symbols in a vertical column or diognal or a horizontal row in a continuous manner....\n");
     if(c=='X'||c=='x')
     {
    printf("\nYou can start the game as you choose X\n");
         s=1;
     }
    else 
    {
        s=0;
    printf("\nBot starts the game as you chose O\n");
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        if((s==1&&i%2==0)||(s==0&&i%2!=0))
        {
            printf("Please enter your Position:");
            scanf("%d",&d);
            d--;
            if(d>5)
            r=d-6;
            else if(d>2)
            r=d-3;
            else
            r=d;
            if(a[(d/3)][r]==0)
           a[(d/3)][r]=1;
            else
            {
                do
                {
                    printf("Please enter correct position again:");
                    scanf("%d",&d);
                     d--;
                    if(d>5)
                     r=d-6;
                    else if(d>2)
                     r=d-3;
                    else
                     r=d;
                }while(a[d/3][r]==1||a[d/3][r]==2);
                    a[d/3][r]=1;
            }
        }
          else
            {
              for(j=0;j<3;j++)
              {
                  if((a[j][0]==a[j][1]&&a[j][0]!=0)&&(a[j][2]==0))
                  {
                      a[j][2]=2;
                      d=3*j+2;
                      break;
                  }
                  else if((a[j][0]==a[j][2]&&a[j][0]!=0)&&(a[j][1]==0))
                  {
                       a[j][1]=2;
                      d=3*j+1;
                      break;
                  }
                  else if((a[j][1]==a[j][2]&&a[j][1]!=0)&&(a[j][0]==0))
                  {
                       a[j][0]=2;
                      d=3*j;
                      break;
                  }
                  else if((a[0][j]==a[1][j]&&a[0][j]!=0)&&(a[2][j]==0))
                  {
                       a[2][j]=2;
                      d=6+j;
                      break;
                  }
                   else if((a[0][j]==a[2][j]&&a[0][j]!=0)&&(a[1][j]==0))
                  {
                       a[1][j]=2;
                      d=3+j;
                      break;
                  }
                   else if((a[1][j]==a[2][j]&&a[1][j]!=0)&&(a[0][j]==0))
                  {
                       a[0][j]=2;
                      d=j;
                      break;
                  }
                  else if((a[0][0]==a[1][1]&&a[1][1]!=0)&&(a[2][2]==0))
                  {
                       a[2][2]=2;
                      d=8;
                      break;
                  }
                  else if((a[0][0]==a[2][2]&&a[0][0]!=0)&&(a[1][1]==0))
                  {
                       a[1][1]=2;
                      d=4;
                      break;
                  }
                  else if((a[1][1]==a[2][2]&&a[1][1]!=0)&&(a[0][0]==0))
                  {
                       a[0][0]=2;
                      d=0;
                      break;
                  }
                   else if((a[2][0]==a[1][1]&&a[1][1]!=0)&&(a[0][2]==0))
                  {
                       a[0][2]=2;
                      d=2;
                      break;
                  }
                  else if((a[2][0]==a[0][2]&&a[2][0]!=0)&&(a[1][1]==0))
                  {
                       a[1][1]=2;
                      d=4;
                      break;
                  }
                  else if((a[1][1]==a[0][2]&&a[1][1]!=0)&&(a[2][0]==0))
                  {
                       a[2][0]=2;
                      d=6;
                      break;
                  }
              }
              if(j==3)
              {
            d=ran(1,9);
            d--;
            if(d>5)
            r=d-6;
            else if(d>2)
            r=d-3;
            else
            r=d;
            if(a[(d/3)][r]==0)
           a[(d/3)][r]=2;
            else
            {
                do
                {
                    d=ran(1,9);
                     d--;
                    if(d>5)
                     r=d-6;
                    else if(d>2)
                     r=d-3;
                    else
                     r=d;
                }while(a[d/3][r]==1||a[d/3][r]==2);
                    a[d/3][r]=2;
            }
              }
          printf("Bot selected position:%d\n",d+1);
    }
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
          if(s==1)
          {
            if(a[j][k]==1)
                printf("X");
            else if(a[j][k]==2)
                printf("O");
            else
                printf(" ");
          }
          else
          {
            if(a[j][k]==2)
                printf("X");
            else if(a[j][k]==1)
                printf("O");
            else
                printf(" ");
          }
            if(k!=2)
                printf(" | ");
        }
        printf("\n");
        if(j!=3)
        printf("---------\n");
    }
        for(j=0;j<3;j++)
              {
                  if(((a[j][0]==a[j][1])&&(a[j][0]==a[j][2]))&&(a[j][2]!=0))
                  {
                    if((s==1&&i%2==0)||(s==0&&i%2!=0))
                        printf("WOW!!Congratualtions..... You won by matching %d horizontal line",j+1);
                      else
                        printf("OOPS!! BOT WON the game by matching %d horizontal line. Well played",j+1);
                      break;
                  }
                 else  if(((a[0][j]==a[1][j])&&(a[0][j]==a[2][j]))&&(a[0][j]!=0))
                  {
                    if((s==1&&i%2==0)||(s==0&&i%2!=0))
                        printf("WOW!!Congratualtions..... You won by matching %d vertical line",j+1);
                      else
                        printf("OOPS!! BOT WON the game by matching %d vertical line. Well played",j+1);
                      break;
                  }
                 else if(((a[0][0]==a[1][1])&&(a[0][0]==a[2][2]))&&(a[2][2]!=0))
                  {
                    if((s==1&&i%2==0)||(s==0&&i%2!=0))
                        printf("WOW!!Congratualtions..... You won by matching a diagnoal");
                      else
                        printf("OOPS!! BOT WON the game by matching a diagnoal.Well played");
                      break;
                  }
                 else if(((a[2][0]==a[1][1])&&(a[2][0]==a[0][2]))&&(a[0][2]!=0))
                  {
                    if((s==1&&i%2==0)||(s==0&&i%2!=0))
                        printf("WOW!!Congratualtions..... You won by matching a diagnoal");
                      else
                        printf("OOPS!! BOT WON the game by matching a diagnoal.Well Played");
                      break;
                  }
        }
        if(j<3)
            break;
      else if(i==8)
            printf("Great game! But ended up in a Draw");
    }
    return 0;
}
