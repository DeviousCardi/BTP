#include <stdio.h>
int main() {
int k,i,n,j;
scanf("%d",&n);
    for(i=n+1;i>=1;i=i-1) {
    for(k=1;k<=n+1;k=k+1) {
       if(k<i)
       {printf(" ");}
       else {
           if((k+i+n)%2!=0)
           printf("X");
           else
           printf("*"); } }
    printf("\n"); }
for(i=2;i<=n+1;i=i+1) {
    for(j=1;j<=n+1;j=j+1)
    {if(j<i)
    {printf(" ");}
    else {
        if((j+i+n)%2==0)
        printf("X");
        else
        printf("*"); } }
    printf("\n"); }
	return 0; }