#include<stdio.h>
void print(int num[],int size);
void swap(int num[],int size);
void main()
{
        int num[] = {9,5,6,4,3,2,7,8,1,0,10};
        int size = sizeof(num)/sizeof(num[0]);
        swap(num,size);
        print(num,size);
        

}

void swap(int num[],int size)
{
        
        for(int i = 0;i<size;i++)
        {
            for(int j = 0;j<size;j++)
            {
                if(num[j]>num[j+1])
                {
                    int temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                }
            }
        }


}

void print(int num[],int size)
{
for(int i = 0;i < size;i++)
{
    printf("%i ",num[i]);
}



}
