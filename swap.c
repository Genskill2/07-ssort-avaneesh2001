#include <stdio.h>

void swap_max(int arr[], int l, int n)
{
int t,temp;
int mx=arr[n];
t=n;
for(int i=(n+1);i<l;i++)
{
if(arr[i]>mx)
{
mx=arr[i];
t=i;
}
}
temp=arr[t];
arr[t]=arr[n];
arr[n]=temp;
}
void ssort(int arr[], int l)
{
for(int i=0;i<l;++i)
swap_max(arr,l,i);
}
