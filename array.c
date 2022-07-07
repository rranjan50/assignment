#include<stdio.h>
int main()
{
int arr[10],i,n,max,min;
printf("enter the number of elements n\n");
scanf("%d",&n);
printf("enter the elements of array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("elements of array are:");
for(i=0;i<n;i++);
{
printf("%d\n",arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>=max)
max=arr[i];
}
for(i=0;i<n;i++)
{
if(arr[i]<=min)
min=arr[i];
}
printf("max=%d\n min=%d\n",max,min);
}
