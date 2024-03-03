#include<stdio.h>
int max(a,b) {
    if(a>b)return a;
    else return b; }
int main() {
int n,a[20],i,j,maxtill[20],temp;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        if(j<i&&a[j]<a[i])
        {maxtill[i]=max(max(1+maxtill[j],1)); }
        else
        maxtill[i]=1; } }
for(i=0;i<n;i++) {
    for(j=0;j<n;j++)
    {if(i<j&&maxtill[i]<maxtill[j])
        {temp=maxtill[i];
        maxtill[i]=maxtill[j];
        maxtill[j]=temp; } } }
printf("%d",maxtill[0]);
    return 0; }