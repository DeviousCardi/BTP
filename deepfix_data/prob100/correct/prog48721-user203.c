#include<stdio.h>
#include<limits.h>
int rmax(int a,int b) {
    if(a>b)
    return a;
    if(b>a)
    return b;
    if(a==b)
    return b; }
int rmini(int a,int b) {
    if(a>b)
    return b;
    if(b>a)
    return a;
    if(a==b)
    return b; }
int main() {
    int m,n;
    scanf("%d%d",&n,&m);
    int a[m][n];
    int rm;
    int rmin;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    rmin=999999;
    for(int i=0;i<m;i++) {
        rm=-9999;
        for(int j=0;j<n;j++) {
            if((j+1)<n) {
                rm=rmax(rm,a[i][j+1]); } }
        rmin=rmini(rmin,rm);
        printf("%d\n",rmin); }
    return 0; }