#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",& num); 
    int result=fact(num);
    printf("%d",result);

}
int fact(int n)
{
    if(n>0)
    {
    return n*fact(n-1);
    }
    else{
        return 1;
    }
    
}