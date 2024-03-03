#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,max,min;
    int arr[m][n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&arr[i][j]);
    min=arr[0][0];
    for(i=0;i<m;i++) {
        max=arr[i][0];
        for(j=0;j<n;j++) {
         if(arr[i][j]>max)
         max=arr[i][j]; }
        if(max<min)
        min=max; }
    printf("%d",min);
    return 0; }