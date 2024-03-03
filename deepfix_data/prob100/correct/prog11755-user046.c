#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    int arr[m][n];
    scanf("%d%d\n",&n,&m);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[i][j]); }
        scanf("\n"); }
    int arr2[m];
    for(int i=0;i<m;i++) {
        arr2[i]=arr[i][1]; }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(arr2[i]<arr[i][j])
            arr2[i]=arr[i][j]; } }
    int big=arr2[0];
    for(int i=0;i<m;i++) {
        if(big<arr2[i])
        big=arr2[i]; }
    printf("%d",big);
    return 0; }