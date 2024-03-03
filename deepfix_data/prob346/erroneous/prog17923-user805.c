#include <stdio.h>
int main(){
    int n,i,j,count;
    scanf("%d",&n);
    int a[n],b[99],c[n];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&a[i]); }
    count=0;
    for(j=0;j<=99;j++) {
       if(a[i]==j) {
           count=count+1;
           b[j]=count;
           count=0; }
       for(j=0;j<=99;j++) {
         for(i=0;i<=b[j];i++) {
             printf("%d";j); } }
    printf("end");
    return 0; }