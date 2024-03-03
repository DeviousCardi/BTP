#include <stdio.h>
#include <stdlib.h>
int sigma(int* t,int i,int j){
    int x=0,sum=0;
    for(x=i;x<=j;x++)
    sum=sum+t[x];
    return sum; }
int main() {
int i,n,j,a,b,x;
scanf("%d\n",&n);
int* t=malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&t[i]);
for(i=0;i<n;i++){
if(sigma(t,0,i)>=sigma(t,i+1,n-1))
break; }
for(x=0;x<n;x++){
if(sigma(t,0,i-1)>=sigma(t,x,n-1))
break; }
if(t[i]>=sigma(t,i+1,x-1))
printf("%d %d",i+1,n-1-i);
else printf("%d",i,n-1);
	return 0; }