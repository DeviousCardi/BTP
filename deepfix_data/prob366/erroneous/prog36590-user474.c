#include <stdio.h>
int main(){
    int n,i,j,d;
    int a[400];
    int b[200];
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]) }
    for(i=0;i<n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                b[i]=j-i; } } }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(b[i]>b[j]) {
                d=b[i];
                b[i]=b[j];
                b[j]=d; } } }
    printf("%d",b[0]);
    return 0; }