// 4. Write a program to calculate HCF of two numbers.


#include<stdio.h>
int main()
{
    int num1,num2,i,k,HCF;
    printf("calculate HCF of two number");
    scanf("%d%d",&num1,&num2);
    for(i=2;i<=num1*num2;i++)
    {
        if((i%num1==0) && (i%num2==0))
        {
            k=i;
            printf(" HCF=%d",HCF=(num1*num2)/k);
            break;
        }
    }
    return 0;
}



