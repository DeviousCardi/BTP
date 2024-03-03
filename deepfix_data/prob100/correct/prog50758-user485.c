#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,min,i,j;
    scanf("%d%d",&n,&m);
    int a[m*n],max[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[j+i*n]); }
    for(i=0;i<m;i++) {
        max[i]=a[i*n];
        for(j=0;j<n;j++) {
            if(a[j+i*n]>max[i])
            max[i]=a[j+i*n]; } }
    min=max[0];
    for(i=0;i<m;i++)
    if(min>max[i])
    min=max[i];
    printf("%d",min);
    return 0; }