#include<stdio.h>
int diff(int a[100],int n){
    int df=0,i=1;
    if(i<n){
    df=a[0]-a[i];
    a[0]=df;
    i++;
    diff(a,n-1); }
return df; }
int main() {
 int i,z,n,s[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++){scanf("%d",&s[i]);}
z=diff(s,n);
 printf("%d",z);
    return 0; }