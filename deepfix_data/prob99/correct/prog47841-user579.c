#include<stdio.h>
int max(int a[],int x)
{int i,maxi=a[0];
for(i=0;i<x;i++) {
    if(maxi<a[i]){
        maxi=a[i]; } }
return maxi; }
int main() {
int n,k,a[20],i,j,b[20];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{int count=1,temp=0,c[20];
b[0]=1;
    for(j=i-1;j>=0;j--)
    {if(a[j]<a[i]) {
        count++;
        c[temp]=b[j]+1;
        temp++; }
        if(count==1) {
        b[i]=1; } }
    if(i!=0&&count!=1) {
        b[i]=max(c,temp); } }
printf("%d",max(b,n));
    return 0; }