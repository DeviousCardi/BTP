#include<stdio.h>
#include<limits.h>
int rmax(int a,int b) {
    if(a>=b)
    return a;
    if(b>a)
    return b; }
int rmini(int a,int b) {
    if(a>=b)
    return b;
    if(b>a)
    return a; }
int main() {
    int m,n;
    scanf("%d%d",&n,&m);
    int a[m][n];
    int rm;
    int rmin;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    rmin=a[0][0];rm=a[0][0];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if((j+1)<n)
            rm=rmax(a[i][j],a[i][j+1]);
            printf("%d\n",rm); }
        rmin=rmini(rmin,rm); }
    printf("%d",rmin);
    return 0; }