#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,j;

    char *qst[] = {"What is my name?","How old am I?","What is my favorite clr?"};

    char *choice[][3] = {
        {"Hamza","Ayoub","Yassine"},
        {"22","23","20"},
        {"Green","B&W","Any"}
    };

    int ans[] = {0,0,1},tmpAns,score = 0;    

    for (i = 0; i < 3; i++)
    {
        system("cls");
        printf("\n***** Welcome to youCode Quize *****\n\n");
        
        printf("Q%d: %s\n",i,qst[i]);
        for (j = 0; j < 3; j++)
        {
           printf("\t%d - %s\n",j,choice[i][j]);
        }
        
        printf("Answer: ");
        scanf("%d",&tmpAns);
        if(ans[i] == tmpAns) score+=2;
    }

    printf("\n\n\tYour score is: %d",score);
    
}