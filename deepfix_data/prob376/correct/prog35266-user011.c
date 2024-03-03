#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{   int sum=0;int i;
    if(n==0)
    {return 1;}
    for(i=0;i<=(n-1);i++) {
    sum=sum+cat(i)*cat((n-1)-i); }
    return sum; }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    for(i=0;i<t;i++) {
    printf("%d\n",cat(k[i])); }
	return 0; }