#include <stdio.h>
int main(){
    int n,c,i,j;
    scanf("%d",&n);
    int a[100];
    if(n<=10000) {
         for(i=0;i<100;i++) {
            a[i]=0; }
        for(i=0;i<n;i++) {
            scanf("%d",&c);
            a[c]++; }
        for(i=0;i<100;i++) {
            for(j=1;j<=a[i];j++) {
            printf("%d ",i); } } }
    printf("end");
    return 0; }