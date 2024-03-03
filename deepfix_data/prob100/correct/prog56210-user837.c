#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,b,c;
    scanf("%d%d\n",&n,&m);
    int a[m][n];
    int i,j,k,l;
    int max[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d\n",&a[i][j]); }
    for(k=0;k<m;k++) {
        max[k]=a[k][0];
        for(l=1;l<n;l++) {
            if(a[k][l]>max[k]) {
                max[k]=a[k][l]; } } }
    for(b=0;b<m;b++) {
        while((c=b+1)&&(c<m)) {
            while(max[b]<max[c]) {
                printf("%d",max[b]);
                break;
                c++; } } }
    return 0; }