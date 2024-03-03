#include <stdio.h>
int main()
{ int n,m,i,j,max,b[n],sum=0;
scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            sum=sum +a[i][j]; }
        scanf("%d",&b[i]);
        printf("\n"); }
        max=b[0];
    for(i=1;i<n;i++){
        if(b[i]>max){
            max=b[i]; } }
    printf("%d",max);
    return 0; }