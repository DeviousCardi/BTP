#include<stdio.h>
#include<limits.h>
int min(int a[],int m);
int min(int a[],int m) {
    int b,i,j;
    for(i=0;i<m;i++) {
        b=a[i];
        for(j=m-1;j>=i+1;j--) {
            if(a[i]>=a[j]) {
                a[i]=a[j];
                a[j]=b;
                b=a[i]; } } }
    return 0; }
int main() {
    int n,m,i,j,a[100],y,k,f,r;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&y);
            r=y;
            if((i==0)&&(j==0)) {
                f=y;
                k=f; }
            else if((i!=0)&&(j!=0)&&(f<=r)) {
                k=r; }
            f=r; }
        a[i]=k; }
    min(a,m);
    printf("%d",a[0]);
    return 0; }