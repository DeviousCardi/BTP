#include <stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d\n",&n);
    int a[2*n],b[n];
    for(i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<(n);i++) {
        for(j=(n);j<2*n;j++) {
            if(a[i]==a[j])
            b[i]=(j-i); } }
    for(i=0;i<(n)-1;i++) {
        for(j=(i+1);j<(n);j++) {
            t=b[i];
            if(b[i]>b[j]) {
                b[i]=b[j];
                b[j]=t; } } }
for(i=0;i<n;i++) {
      printf("%d\n",b[i]); }
    return 0; }