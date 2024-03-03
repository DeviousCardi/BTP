#include<stdio.h>
int fab(int n){
if(n==1)return 0;
if(n==2)return 1;
else return fab(n-1)+fab(n-2); }
int main(){
int n,i,a[20];
for(i=1;i<=20;i++){
    a[i-1]=fab(i); }
scanf("%d",&n);
for(i=0;i<20;i++){
 if(k==a[i]){
     printf("yes\n");
     break; } }
if(i==20)printf("no\n");
return 0; }