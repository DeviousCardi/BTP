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
            for(int p=0;p<t;p++)
            printf("%d ",b[p]);
            printf("\n");
            for(int l=0;l<m;l++)
            b[l]=0; } } }