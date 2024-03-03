#include <stdio.h>
int add(int h[],int f);
int main() {
    int n,m,i,j,k,t;
    scanf("%d%d",&m,&n);
    int a[m],b[m];
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
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
                for(int l=0;l<m;l++)
                b[l]=0; } } }
    printf("NO");
    return 0; }
int add(int a[],int n) {
    if(n==0)
    return 0;
    return a[n]+ add(a,n-1); }