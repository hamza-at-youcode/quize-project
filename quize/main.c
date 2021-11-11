#include<stdio.h>
#include<stdlib.h>

#define NUM_OF_QST 6

int main(){

    int i,j,nq = NUM_OF_QST;

    char *qst[] = {"Git is:","Who created C language?","What is the size of an integer?","The command cd stands for:","Choose the right syntax:","How to declare an array of integers in c?"};

    char *choice[][6] = {
        {"A version control system","A cloud-based hosting service","Both answers are corect"},
        {"Dennis Ritchie","Jack Ma","Brendan Eich"},
        {"2 to 4","8","10"},
        {"change directorey","change directory","create directory"},
        {"scanf(\"%d\",&nbr);","scanf(\"%d\",nbr);","None of those"},
        {"int arr[];","int arr[] = {'1','7','9'};","int arr[] = {2,7,8}"}
    };

    int ans[] = {0,0,0,1,0,2},tmpAns,score = 0;    

    for (i = 0; i < nq; i++)
    {
        system("cls");
        printf("\n***** Welcome to youCode Quize *****\n");
        printf("***** Question %d/%d, Score:%d\n",i+1,nq,score);
        printf("************************************\n\n");

        
        printf("Q%d: %s\n",i,qst[i]);
        for (j = 0; j < 3; j++)
        {
           printf("\t%d - %s\n",j,choice[i][j]);
        }
        
        printf("Answer: ");
        scanf("%d",&tmpAns);
        if(ans[i] == tmpAns) score+=4;
    }

    printf("\n\n\tYour score is: %d - ",score);

    if (score > 8 && score <= 12){
        printf("Good");
    }else if (score > 12 && score < 16)
    {
        printf("Very Good!");
    }else if (score > 16)
    {
        printf("Exellent!!!");
    }else {printf("Try again ;(");}
    
    
    
}