#include <stdio.h>
int main(){
    int a[500000],b[500000],n,i,j,x=0,l;
    scanf("%d",&n);
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=n;j<(2*n);j++) {
            if(a[i]==a[j]) {
                b[x]=j-i;
                x++; } } }
    for(i=0;i<(n*n);i++) {
        l=b[i];
        for(j=i+1;j<(n*n);j++) {
            if(b[i]>=b[j]) {
               b[i]=b[j];
               b[j]=l;
               l=b[i]; } } }
    for(i=(n*n)-1;i>=0;i++) {
        if(b[i]!=0)
        printf("%d",b[i]); }
    return 0; }