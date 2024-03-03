#include <stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d\n",&n);
    int a[2*n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<(n);i++) {
        for(j=(i+1);j<n;j++) {
            if(a[i]==a[j])
            b[i]=j-i; } }
    for(i=0;i<(2*n)-1;i++) {
        for(j=(i+1);j<(2*n);j++) {
            t=a[i];
            if(a[i]>a[j]) {
                a[i]=a[j];
                a[j]=t; } } }
      printf("%d",a[0]);
    return 0; }