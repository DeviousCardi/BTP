#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n],c[n],temp;
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        b[i]=a[i]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(b[i]>=b[j]) {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp; } } }
    c[0]=b[0];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
             if(c[i]==a[j]) {
                   c[i+1]=a[a[j]-1]; } } }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(c[i]==c[j]) {
                printf("%d %d",j,j-i); } } }
    return 0; }