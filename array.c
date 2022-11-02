#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of elements to be assign");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <= n+2; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n+5; j++)
    {
        /* code */
        printf("%d",arr[j]);
    }
    
    
    return 0;
}
