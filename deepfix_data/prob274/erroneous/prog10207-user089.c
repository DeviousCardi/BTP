#include <stdio.h>
int main(){
    int n,i,j,h,k;
    h=1;
    k=0;
    scanf("%d",&n);
    int a[n+1],b[n+1],m;
    for(i=1;i<(n+1);i++) {
        scanf("%d",&a[i]); }
    b[1]=a[1];
    m=b[1];
    for(i=2;i<n+1;i++) {
        b[i]=a[m];
        m=b[i]; }
    for(i=1;i<n+1;i++) {
        for(j=i;j<n+1;j++) {
            if(b[i]==b[j]) {
            h=0;
            if(h==0)
            break; }
        if(h==0) {
            printf("%d",j);
            break; } }
    return 0; }