#include<stdio.h>
int diff(int a[100],int n){
    int df,i=1;
    if(i<n){
    df=a[0]-a[i];
    a[0]=df;
    return diff(a,n);} }
int main() {
 int i,z,n,s[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++){scanf("%d",&s[i]);}
z=diff(s,n);
 printf("%d",z);
    return 0; }