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
}   printf("%d and %d",temp,inp[t]);
for(i=0;i<n-i;i++){
    foo[i]=inp[i]; }
printf("%s",foo);
return 0; }