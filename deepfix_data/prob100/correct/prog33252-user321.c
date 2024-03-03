#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j=0,a[n],max,k=0,min;
    scanf ("%d%d",&n,&m);
    for (i=1; i<=m; i++){
        max=a[0];
        for(j=0; j<n; j++){
        scanf("%d",&a[j]);
        if (a[j]>max){
            max=a[j]; } } }
    a[k]=max;
    for (k=0; k<m; k++){
    min=a[0];
    if(a[k]<min){
        min=a[k]; } }
    printf ("%d",min);
    return 0; }