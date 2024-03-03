#include<stdio.h>
int main(){
int n,k,i,t,temp;
scanf("%d%d",&n,&k);
int inp[n];
int foo[n];
for(i=0;i<n;i++){
    scanf("%d",&inp[i]); }
      printf("%s",inp);
    temp=inp[0];
for(i=0;i<n;i++){
    if(temp<inp[i])
    temp=inp[i];
    t=i;
printf("%s ",inp); }
return 0; }