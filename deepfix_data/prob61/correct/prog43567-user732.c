#include<stdio.h>
int main(){
int n,k,i,t,temp;
scanf("%d%d",&n,&k);
int inp[n];
int foo[n];
for(i=0;i<n;i++){
    scanf("%d",&inp[i]); }
    temp=inp[0];
for(i=0;i<n;i++){
    if(temp<inp[i])
    temp=inp[i];
    t=i;
 for(i=0;i<n-i;i++){
    foo[i]=inp[t]; }
printf("%s hello",foo); }
return 0; }