#include <stdio.h>
#include <stdlib.h>
void main()
{
int i;
    printf("enter the number:-");
    scanf("%i",&i);
if(i%2==0 && i!=0)
{
   printf("even no");
}
else if(i%2==1)
{
    printf("odd no");
}
else
{
    printf("0 is neither even nor odd");
}

}
