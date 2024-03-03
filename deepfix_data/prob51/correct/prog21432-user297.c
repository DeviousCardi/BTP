#include <stdio.h>
int main()
{ int n,k,max,index,temp;
int arr[1000];
scanf("%d %d",&n,&k);
int i=0;
for(i=0;i<k;i++)
{   max=arr[i];
    index=i;
   int j;
   for(j=i+1;j<=n;j++)
   scanf("%d",&arr[j]);
 if(arr[j]>max)
 { max=arr[j];
   index=j;}
} temp=arr[i];
   arr[i]=arr[index];
   arr[index]=temp;
 printf ("%d\n",max);
    return 0; }