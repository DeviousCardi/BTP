#include <stdio.h>
int main()
{   int m,n,max,i,j,g;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=0;
        for(j=0;j<m;j++){
            scanf("%d",&g);
            a[i]=a[i]+g; } }
    for(i=0;i<n;i++){
        if(a[i+1]>a[i]){
            max=a[i+1]; } }
    printf("%d",max);
    return 0; }