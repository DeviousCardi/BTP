#include<stdio.h>
int n;
void kd(int s[],int i,int sum) {
    if(i==n) {
        printf("%d",sum);
        return; }
    while(i<n) {
        kd(s,i+1,sum+s[i]); } }
int main() {
int s[10000],i;
scanf("%d",%n);
for(i=0;i<n;i++)
scanf("%d ",&s[i]);
kd(s,0,0);
    return 0; }