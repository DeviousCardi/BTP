#include <stdio.h>
long add(long a[],long n) {
    if(n==0)
    return 0;
    return a[n]+add(a,n-1); }
int main() {
    long n,m,i,j,k,t;
    scanf("%ld%ld",&m,&n);
    long a[m],b[m];
    for(i=0;i<m;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<m;i++) {
        for(j=i;j<m;j++) {
            t=0;
            for(k=i;k<=j;k++) {
                b[t]=a[k];
                t++; }
          if(add(b,t)==n) {
                printf("YES");
                return 0; }
            else {
                for(long l=0;l<m;l++)
                b[l]=0; } } }
    printf("NO");
    return 0; }