#include <stdio.h>
int check(int n,int a[]) {
    int flag=0;
    for(i=0;a[i]!='\0';i++) {
        if(n==a[i])
        flag=1; }
    return flag; }
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n+1],b[2*n+1];
    a[0]=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    b[0]=0;
    b[1]=1;
     for(i>1;i<=2*n;i++) {
         if(i%2!=0 && check(i)==1) {
             b[i]=i; }
         else if(i%2==0 && check(a[i/2])==1) {
             b[i]=a[i/2]; } }
     int count=0;
     for(i=1;i<=n;i++) {
         if(a[i]=a[2])
         count++; }
     for(i=1;i<n-1;i++) {
         for(j=i+1;j<n,j++) {
             if(a[i]=a[j])
             printf("%d",i-j-count); } }
    return 0; }