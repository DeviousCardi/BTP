#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k)    {
    if(n<k)               return 0;
    if((n==0)&&(k==0))    return 1;
    if(k==0)              return 1;
    else                  return bin(n-1,k)+bin(n-1,k-1); }
int main() {
    int t,b,i,j,p=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)   {
        scanf("%d",&b);
        for(j=1; j<=20; j++)   {
            for(k=1; k<20; k++)    {
                if(bin(j,k)==b)       {
                    printf("%d %d",j,k);
                    p=1; }
                else continue; } }
        if(p==0)   printf("%d",-1); }
	return 0; }