#include <stdio.h>
int main() {
int k,i,n,j;
scanf("%d",&n);
    for(i=n;i>=1;i=i-1) {
    for(k=1;k<=n;k=k+1) {
       if(k<i)
       {printf(" ");}
       else {
           if(k%2==0)
           printf("X");
           else
           printf("*"); } }
    printf("\n"); }
for(i=2;i<=(n+1)/2;i=i+1) {
    for(j=1;j<=(n+1)/2;j=j+1)
    {if(j<i)
    {printf(" ");}
    else
    {printf("*"); } }
    printf("\n"); }
	return 0; }