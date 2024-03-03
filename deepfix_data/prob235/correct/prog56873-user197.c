#include <stdio.h>
#include <stdlib.h>
int main() {
int h,i,j,l,k;
scanf("%d",&h);
l=(h+1)/2;
    for(i=0;i<=(l-1);i++)
    {   for(k=(l-1);k>i;k--)
        {printf(" ");}
        for(j=(l-i);j<=(l+i);j++) {
            printf("%d",j%10); }
    printf("\n"); }
    for(i=(l-2);i>=0;i=i-1)
    {   for(k=(l-1);k>i;k--)
        {printf(" ");}
        for(j=(l-i);j<=(l+i);j=j+1)
        {printf("%d",j%10);}
        printf("\n"); }
    	return 0; }