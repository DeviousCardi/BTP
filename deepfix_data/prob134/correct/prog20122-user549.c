#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k)    {
    if(n<k)               return 0;
    if((n==0)&&(k==0))    return 1;
    if(k==0)              return 1;
    else                  return bin(n-1,k)+bin(n-1,k-1); }
int main() {
    int b,n,k,p=0;
    scanf("%d",&b);
    for(n=0; n<=20; n++)   {
        for(k=0; k<20; k++)    {
            if(bin(n,k)==b)       {
                printf("%d %d",n,k);
                p=1; }
            else continue; } }
    if(p==0)   printf("%d",-1);
	return 0; }