#include <stdio.h>
#include <stdlib.h>
int sigma(int* t,int i,int j){
    int x=0,sum=0;
    for(x=i;x<=j;x++)
    sum=sum+t[x];
    return sum; }
int main() {
int i,n,x,y;
scanf("%d\n",&n);
x=0;
y=n-1;
int* t=malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&t[i]);
while(i<n-1&&j>0){
if(sigma(t,0,x)<sigma(t,y,n-1))
 x++;
  if(sigma(t,0,x)>sigma(t,x,n-1))
 y--;
  if(sigma(t,0,x)==sigma(t,x,n-1)) {
     x++;y--; }
if(x==y) {printf("%d %d",x,n-x);break;}
if(x==y-1) {printf("%d %d",x+1,n-x-1);break;} }
return 0; }