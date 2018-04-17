#include<math.h>
#include<stdio.h>
int main()
{
    int i,n,j=0,k=0,x=0,l,req[50],mov=0,cp,ub,end,pv, lower[50],upper[50], temp,a[50];
    printf("Enter total number of cylinders \n");
    scanf("%d",&ub);
	printf("Enter the current position\n");
    scanf("%d",&cp);
    printf("Enter the previous position\n");
    scanf("%d",&pv);
    printf("Enter the number of elements of the queue\n");
    scanf("%d",&n);
    printf("Enter the request queue\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    
