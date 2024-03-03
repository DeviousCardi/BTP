#include <stdio.h>
#include <stdlib.h>
int main() {
int ni,n2;
scanf("%d%d",&n1,&n2);
int arr1[20],arr[20],num1[10],num2[10];
for(i=0;i<n1;i=i+1)
{scanf("%d",arr[i]);}
for(i=0;i<n2;i=i+1)
{scanf("%d",arr[i]);}
for(i=0;i<=9;i=i+1)
{for(j=0;j<n1;j=j+1)
if(arr[j]==i)
    {sum=sum+1;}
    num1[i]=sum;
    sum=0;}
for(i=0;i<=9;i=i+1)
{for(j=0;j<n2;j=j+1)
if(arr[j]==i)
    {sum=sum+1;}
    num2[i]=sum;
    sum=0;}
i=0;sum=0;
while(num1[i]!=0&&num2[i]=0&&i<10)
{sum=sum+1;i++;}
if(sum<10)
printf("%d",sum);
else printf("no");
	return 0; }