#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j;
    scanf("%d\n",&n);
    int a[20];
    for(i=0;i<n;i++)
{    scanf("%d\n",&a[i]);}
    if(a[0]>a[1])
    {printf("Yes\n");}
    for(j=0;j<n-1;j++)
{   if((j!=0)&&(a[j]>a[j+1])&&(a[j]>a[j-1]))
     {printf("Yes\n");}
    else
    if(a[j]==a[j+1])
    {break;}
    else
    {printf("No\n");}}
	return 0; }