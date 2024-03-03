#include <stdio.h>
int main() {
int k,i,n,j;
scanf("%d",&n);
    for(i=n;i>=1;i=i-1) {
    for(k=1;k<=n;k=k+1) {
       if(k<i)
       {printf(" ");}
       else {
           if((k+i)%2!=0)
           printf("*");
           else
           printf("X"); } }
    printf("\n"); }
for(i=1;i<=n;i=i+1) {
    for(j=1;j<=n;j=j+1)
    {if(j<i)
    {printf(" ");}
    else {
        if((j+i)%2==0)
        printf("*");
        else
        printf("X"); } }
    printf("\n"); }
	return 0; }