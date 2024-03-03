#include<stdio.h>
#include<limits.h>
int main() {
    int row,m,n,i,temp;
    scanf("%d %d\n",&n,&m);
    int a[n],b[m];
    for(row=0;row<m;row++) {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++) {
            if(a[i+1]<a[i]) {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp; } }
        b[row]=a[n-1]; }
    for(row=0;row<m-1;row++) {
            if(b[row+1]>b[row]) {
                temp=b[row];
                b[row]=b[row+1];
                b[row+1]=temp; } }
    printf("%d",b[m-1]);
    return 0; }