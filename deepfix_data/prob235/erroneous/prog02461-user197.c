#include <stdio.h>
#include <stdlib.h>
int main() {
int h,i,j,l,k,m;
scanf("%d",&h);
l=(h+1)/2;
    for(i=0;i<=(l-1),i++) {
        for(j=(l-i);j<=(l+i);j++) {
            printf("%d",j%10); }
    printf("\n"); }
    for(k=(l-2);k>=0;k--); {
        for(m=(l-k);m<=(l+k),m=m+1)
        {printf("%d",m%d);}
        printf("\n"); }
    	return 0; }