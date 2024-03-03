#include <stdio.h>
int main() {
    int n,t,k;
    int z=0,flag=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    int b[500];
    b[0]=1;
    for(int j=1;j<500;j++) {
       b[j]=a[b[j-1]]; }
    for(int l=1;l<500;l++) {
        for(int m=4;m<500;m++) {
            if(b[l]==b[m]&&b[l+1]==b[m+1]&&b[l+2]==b[m+2]) {
                k=m-l;
                flag=1;
                break; }
        z++;
        if(flag==1) {
            break; } } }
    t=k+z+1;
    printf("%d %d",t,k);
return 0; }