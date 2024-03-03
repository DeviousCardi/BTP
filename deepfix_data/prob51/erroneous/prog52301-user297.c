#include <stdio.h>
int main()
{ int N,k,max,index;
scanf("%d %d",&N,&k);
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
 printf("%d\",max);
    return 0; }