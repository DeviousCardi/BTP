#include <stdio.h>
#include <stdlib.h>
int sigma(int* t,int i,int j){
    int x=0,sum=0;
    for(x=i;x<=j;x++)
    sum=sum+t[x];
    return sum; }
int main() {
int i,n,j,a,b;
scanf("%d",&n);
int* t=malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&t[i]);
for(i=0;i<n;i++){
if(sigma(t,0,i)<=sigma(t,i+1,n-1))
break; }
printf("%d %d",i,n-i);
	return 0; }