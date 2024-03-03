#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j=0,max,k=0,min=INT_MAX;
    scanf ("%d%d",&n,&m);
    int a[m];
    for (i=1; i<=m; i++) {
        max=INT_MIN;
        for(j=0; j<n; j++) {
            scanf("%d",&a[j]);
            if (a[j]>max) {
                max=a[j]; } }
        if(max<min){
        min=max; } }
    printf ("%d",min);
    return 0; }