#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d%d",&n,&m);
    int min=INT_MAX;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]); }
    for(int i=0;i<m;i++){
        int max=a[i][0];
        for(int j=0;j<n;j++){
            if(a[i][j]>max)
                max=a[i][j]; }
        if(max<min)
            min=max; }
    printf("%d",min);
    return 0; }