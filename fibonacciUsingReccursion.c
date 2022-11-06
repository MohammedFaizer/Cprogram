#include<stdio.h>
int fibo(int);
int main()
{
    int num;
    printf("Enter the Number of series:");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Please enter the positive number\n");
    }
    else{
        for(int i=0;i<num;i++)
        {
           printf("%d\n",fibo(i));

        }
       

    }
    

}
int fibo(int n)
{
 if(n<=1)
{
    return n;
}
else{
    return fibo(n-1)+fibo(n-2);
}
}