#include<stdio.h>
#include<stdlib.h>
int step=0;n=0;
int cat(int s) {
    int i,t,num;
    while(step==0) {
        if(n==0||n==1)
num =1;
else
for(i=0;i<n;i++)
num=num+(cat(i)*cat(n-i-1));
if(num>s) {
t=n-1;
step=1; }
else
n=n+1; }
if(n==0||n==1)
num =1;
else
for(i=0;i<n;i++)
num=num+(cat(i)*cat(n-i-1));
return num; }
int main() {
 int a,b,c;
 scanf("%d",&a);
 for(b=0;b<a;b++) {
     scanf("%d",&c);
     step=0;n=0;
     printf("%d",cat(c)); }
 return 0; }