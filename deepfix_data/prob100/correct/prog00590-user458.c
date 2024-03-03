#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,max,mi;
scanf("%d%d\n",&n,&m);
int a[n+1][m+1],b[n+1];
for(i=1;i<n;i++){
    for(j=1;j<m;j++){
        scanf("%d",&a[i][j]); }
    max=a[i][1];
    for(j=2;j<m;j++){
        if(a[i][j]>max){
            max=a[i][j]; } }
    b[i]=max; }
mi=b[1];
for(i=2;i<n;i++){
    if(b[i]<mi){
        mi=b[i]; } }
printf("%d",mi);
    return 0; }