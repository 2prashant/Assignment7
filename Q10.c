//10. Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
int main()
{
    int temp=0;
    int res=0;
    int n,m,i;
    int count=0;
    printf("Printing armstrong number::\n");
    for(n=1;n<10000;n++)
    {
     temp=n;
     res=0;
     i=n;
     count=0;
     while(i!=0)
     {
         i=i/10;
         count++;
     }
     i=n;
    while(i!=0)
    {
        m=i%10;
        i=i/10;
        res=res+pow(m,count);
    }

    if(temp==res)
        printf("%d\n",res);

    }
    return 0;

}