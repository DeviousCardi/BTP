#include <stdio.h>
int main() {
    int n,t,k;
    int z=0,q=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    int b[500];
    b[0]=1;
    for(int j=1;j<500;j++) {
       b[j]=a[b[j-1]]; }
        for(int m=5;m<500;m++) {
            if(b[3]==b[m]&&b[4]==b[m+1]) {
                k=m-3;
                break; } }
    for(int p=1;p<500;p++) {
        for(int i=0;i<500;i++) {
            if(b[p]==b[i]) {
                break; }
            else {
                z++; } }
        if(z>100) {
            q++; } }
    printf("%d %d",k+1,k);
return 0; }