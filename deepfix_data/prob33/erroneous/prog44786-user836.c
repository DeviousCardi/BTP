#include <stdio.h>
int mod(int a)
int main() {
int h,p;
scanf("%d\n%d\n",&h,&p);
int num[p],diff[p-1];
for(int i=0;i<p;i++)
scanf("%d ",&num[i]);
for(int i=0;i<p-1;i++) {
    if(num[i+1]<num[i])
    diff[i]=num[i+1]-num[i];
    else
    diff[i]=0; }
int sum=0;
for(int i=0;i<p-1;i++)
sum=sum+diff[i];
if(h+sum>0)
printf("Yes");
else
printf("No");
    return 0; }