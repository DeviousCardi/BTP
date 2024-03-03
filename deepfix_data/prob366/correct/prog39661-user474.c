#include <stdio.h>
int main(){
    int n,i,j,d,e,p;int min;
    int a[400];
    int b[200];
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                b[i]=j-i;
                e=i; }
            else if(i>n-1) {
                for(p=e;p<n-1;p++) {
                    b[p]=0; } } } }
    min=b[0];
    for(i=1;i<n;i++) {
        if(b[i]<min&&b[i]!=0) {
            min=b[i]; } }
    printf("%d",min);
    return 0; }