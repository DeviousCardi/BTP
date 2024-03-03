#include<stdio.h>
int n;
void kd(int s[],int i,int sum) {
    if(i==n) {
        printf("%d",sum);
        return; }
        sum=sum+s[i];
        kd(s,i+1,sum); }
int main() {
 int s[100000],i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&s[i]);
kd(s,0,0);
    return 0; }