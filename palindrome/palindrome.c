#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void Palindrome()
{   
    Palindrome(); 
}
int main()
{
        int i;
    char nm[300];
    printf("Enter the words:-");
    scanf("%s",nm);
     int o = strlen(nm)-1;
    char name[300];
    for ( i =0; i<=o; i++)
    {
        name[o-i]= nm[i];
    }
    printf("%s\n",name);
        if (strcmp(nm,name)==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}