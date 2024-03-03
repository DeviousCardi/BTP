#include<stdio.h>
int main(){
int n,k,i,temp;
scanf("%d%d",&n,&k);
int inp[n];
int foo[n];
for(i=0;i<n;i++){
    scanf("%d",&inp[i]); }
    temp=inp[0];
for(i=0;i<n;i++){
    if(temp<inp[i])
    inp[i]=temp;
    k=i;
    printf("%d and %d",temp,inp[k]); }
return 0; }