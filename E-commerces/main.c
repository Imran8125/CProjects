#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void Admin();
int Buyer();
int check(char nm[1000], double rt);
struct Products
{
    char Name[1000];
    char Rate[1000];
    int no;
};


int main()
{
    char ad[] = "admin";
    char buy[]= "buyer";
    char pass[] = "1234";
    char epass[100];
    char login[100];
    printf("login as admin or buyer:-");
    scanf("%s",login);
    if(strcmp(ad,login)==0)
    {
        printf("Enter the password:-");
        scanf("%s",epass);
    if(strcmp(pass,epass)==0)
        {
        printf("login as admin sucessful");
          Admin();
          return 0;
        }
    }else if(strcmp(login,buy)==0)
    {
        printf("login as buyer successful\n");
        printf("Products -- Rates\n");
        Buyer();
    }
     
     
}

void Admin()
{
    char name[100];
    char rate[100];
    printf("Enter the product name:-");
    scanf("%s",name);
    printf("Enter the rate of the product:-");
    scanf("%s",rate);
     FILE* fptr;
    fptr = fopen("Products.txt","a");
    fprintf(fptr,"%s -- Rs.%s\n",name,rate);
    printf("Product was successfully added\n");
    fclose(fptr);

    
}

int Buyer()
{
        FILE* fptr;
    fptr = fopen("products.txt","r");
    char product[100000];
    while (fgets(product,100000,fptr))
    {
        printf("%s",product);
    }
     
    fclose(fptr);
    printf("Enter the name of the product to buy:-");
    scanf("%s",product);

    struct Products p1 = {.Name = "M34",.Rate ="19999"};
    struct Products p2 = {.Name = "apple",.Rate ="100"};
    struct Products p3 = {.Name = "Ac",.Rate ="50000"};
    struct Products p4 = {.Name = "Ak47",.Rate ="80000"};

 
    //struct Products p5 = {.Name = "",.Rate ="",.no=5};
    //struct Products p6 = {.Name = "",.Rate ="",.no=6};
    //struct Products p7 = {.Name = "",.Rate ="",.no=7};
    //struct Products p8 = {.Name = "",.Rate ="",.no=8};
       if(strcmp(product,"M34")==0)
       {
         printf("%s--Rs.%s\n",p1.Name,p1.Rate);
            check("M34",19999);
         }else if(strcmp(product,"apple")==0)
       {
        printf("%s--Rs.%s\n",p2.Name,p2.Rate);
            check("apple",100);
   
        }else if(strcmp(product,"Ac")==0)
       {
         printf("%s--Rs.%s\n",p3.Name,p3.Rate);
         check("Ac",50000);
        }else if(strcmp(product,"Ak47")==0)
       {
         printf("%s--Rs.%s\n",p4.Name,p4.Rate);
         check("Ak47",80000);
         }
     
 }

 int check(char nm[1000],double rt)
 {
    char by[100];
    double tot;
    int q;
    char ok[]= "ok";
    printf("\nEnter ok to buy:-");
    scanf("%s",by);
    if(strcmp(by,ok)==0)
    {
        //printf("Enter the quantity:-");
        //scanf("%i",q);
        //printf("%i",q);
         //tot = q*rt;
       //printf("\n%s--Rs.%lf",nm,tot = q*rt);
       printf("\npurchase was successful\n");
    }else
    {
        Buyer();
    }

 }






