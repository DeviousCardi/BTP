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
     else
     {printf("No\n");}
     for(j=1;j<n-1;j++)
{   if((a[j]>a[j+1])&&(a[j]>a[j-1]))
     {printf("Yes\n");}
    else if(a[j]==a[j+1])
    {continue;}
    else
    {printf("No\n");}}
     if(a[n-1]>a[n-2])
     {printf("Yes\n");}
     else
     {printf("No\n");}
	return 0; }