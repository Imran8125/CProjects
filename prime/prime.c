#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i;
    printf("Enter the number:-");
    scanf("%i",&i);
    if(i==2||i==3||i==5||i==7||i==11)
    {
        printf("%i is prime number",i);
    }else if(i%2==0||i%3==0||i%5==0||i%7==0||i%11==0)
    {
        printf("%i is not prime number",i);
    }else
    {
        printf("%i is prime number",i);
    }

}