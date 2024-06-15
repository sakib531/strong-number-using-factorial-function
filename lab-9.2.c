#include<stdio.h>
int x(int t)
{
    int x=1;
    for(int j=1;j<=t;j++)
    {
       x=x*j;
    }
return x;
}
void num(int n)
{
    int r,sum=0,y=n;
    int arr[3];
    for(int i=0;n>0;i++)
    {
        r=n%10;
        n=n/10;
        arr[i]=r;
        sum+=x(arr[i]);
    }
    if(sum==y)
    {
        printf("%i is a Strong Number.",y);
    }
    else
    {
        printf("%i is not a Strong Number.",y);
    }
}
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%i",&n);
    num(n);

return 0;

}


