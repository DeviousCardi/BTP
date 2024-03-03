#include<stdio.h>
int diff(int a[100000],int n){
    int df,i=1;
    while(i<n){
    df=a[0]-a[i];
    a[0]=df;
    i++; }
return df; }
int main() {
 int i,z,n,s[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++){scanf("%d",&s[i]);}
z=diff(s,n);
 printf("%d",z);
    return 0; }