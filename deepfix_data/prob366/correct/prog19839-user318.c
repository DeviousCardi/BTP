#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[2*n],b[2*n];
    for(int i=0;i<2*n;i++)scanf("%d",&a[i]);
    for(int j=0;j<2*n;j++) {
        for(int k=j;k<2*n;k++) {
                if(a[j]==a[k]) {
                    b[j]=k-j; } } }
    for(int i=0;i<2*n;i++) {
        for(int j=i+1;j<2*n;j++) {
            if(b[i]>b[j]) {
                int x=b[i];
                b[i]=b[j];
                b[j]=x; } } }
for(int m=0;m<2*n;m++) {
    if(b[m]>0) {
        printf("%d",b[m]);
        break; } }
    return 0; }