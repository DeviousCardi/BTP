#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j=0,a[j],max,k=0,min;
    scanf ("%d%d",&n,&m);
    for (i=1; i<=m; i++){
        for(j=0; j<n; j++){
        scanf("%d",&a[j]);
        max=a[0];
        if (a[j]>max){
            max=a[j]; } } }
    a[k]=max;
    for (k=0; k<m; k++){
    min=a[0];
    if(a[k]<min){
        min=a[k]; } }
    printf ("%d",min);
    return 0; }