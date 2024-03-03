#include <stdio.h>
#include <stdlib.h>
int sigma(int* t,int i,int j){
    int x=0,sum=0;
    for(x=i;x<=j;x++)
    sum=sum+t[x];
    return sum; }
int main() {
int i,n,x=0,y;
scanf("%d\n",&n);
y=n-1;
int* t=malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&t[i]);
for(i=0;i<n;i++){
   if(sigma(t,0,x+1)>sigma(t,i+1,n-1))
   x++;
   else if(sigma(t,0,i)<sigma(t,i+1,n-1))
   y--;
   else {
       x++;y--; } }
printf("%d %d",x,y);
	return 0; }