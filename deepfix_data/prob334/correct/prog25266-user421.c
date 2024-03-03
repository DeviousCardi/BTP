#include <stdio.h>
#include <stdlib.h>
int main() {
    int h,b,i,j,e;
     scanf("%d %d",&h,&b);
     for(i=1;i<=h;i++) {
         for(j=1;j<=(b-i);j++)
         printf(" ");
         for(j=0;j<(b-2*(h-i));j++) {
             e=i+j;
             printf("%d",e%10);
             e++; }
        printf("\n"); }
	return 0; }