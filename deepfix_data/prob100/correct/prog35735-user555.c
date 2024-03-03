#include<stdio.h>
#include<limits.h>
int main()
{   int m,n,i,j,maxi,max[m];
    scanf("%d %d",&n,&m);
    int arr[m][n];
    for(i=0;i<m;i++) {
        maxi=(-99999);
        for(j=0;j<n;j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>=maxi) {
                maxi=arr[i][j]; } }
        max[i]=maxi; }
    int min=max[0];
    for(i=0;i<m;i++) {
        printf("%d  ",max[i]);
        if(max[i]<min)
            min=max[i]; }
    printf("%d",min);
    return 0; }