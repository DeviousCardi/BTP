#include <stdio.h>
int main() {
int k,i,n,j;
scanf("%d",&n); {
    for(i=(n+1)/2;i>=1;i=i-1) {
    for(k=1;k<=(n+1)/2;k=k+1) {
       if(k<i)
       {printf(" ");}
       else
       {printf("*");} }
    printf("\n"); } } {
for(i=1;i<=(n+1)/2;i=i+1) {
    for(j=1;j<=(n+1)/2;j=j+1)
    {if(j<i)
    {printf(" ");}
    else
    {printf("*"); }
    printf("\n"); } } }
	return 0; }