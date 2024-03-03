#include <stdio.h>
int main(){
    int a[50000],b[50000],n,i,j,x=0,l;
    scanf("%d",&n);
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=n;j<(2*n);j++) {
            if(a[i]==a[j]) {
                b[x]=j-i;
                x++; } } }
    for(i=0;i<n;i++) {
        l=b[i];
        for(j=i+1;j<n;j++) {
            if(b[i]>=b[j]) {
               b[i]=b[j];
               b[j]=l;
               l=b[i]; } } }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0; }