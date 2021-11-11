#include<stdio.h>
#include<stdbool.h>


int main(){
    unsigned age;
    char name[10];
    bool s;
    int tmp = 1;
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%u",&age);
    printf("Press 1 for female and 0 for male: ");
    scanf("%d",&tmp);

    s = tmp;

    system("cls");
    
    printf("\n******** Card ********\n");
    printf("Name: ");
    puts(name);
    printf("Age: %u\n",age);
    
    if (s) printf("Female");
    else printf("Male");
    printf("\n**********************\n");

    


}