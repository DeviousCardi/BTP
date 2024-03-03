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
if(n>1){
while(x<n-1&&y>0){
if((x==y)||(x==y-1)){printf("%d %d",x+1,n-x-1);break;}
 {printf("%d %d",x+1,n-x-1);break;}
if(sigma(t,0,x)<sigma(t,y,n-1))
 x=x+1;
  else if(sigma(t,0,x)>sigma(t,x,n-1))
 y=y-1;
  else {
     if(x<n+1-y)
     x=x+1;
     else if(x>n+1-y)
 y++;
 else {x++;y--;} } } }
 else
     printf("%d %d",1,0);
  return 0; }