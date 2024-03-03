#include<stdio.h>
#include<stdlib.h>
int n=0;
int cat(int s) {
    int i,num=0,oldnum=0;
    while(1) {
    oldnum=num;
 if(n==0||n==1)
num =1;
else
for(i=0;i<n;i++)
num=num+(cat(i)*cat(n-i-1));
if(num<s)
n=n+1;
else
break; }
    return oldnum; }
int main() {
 int a,b,c;
 scanf("%d",&a);
 for(b=0;b<a;b++) {
     scanf("%d",&c);
     n=0;
     printf("%d",cat(c)); }
 return 0; }