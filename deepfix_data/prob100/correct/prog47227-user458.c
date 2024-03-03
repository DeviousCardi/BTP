#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,max,mi;
scanf("%d%d\n",&n,&m);
int a[n+1][m+1],b[n+1];
for(i=1;i<n+1;i++){
    for(j=1;j<m+1;j++){
        scanf("%d",&a[i][j]); }
    max=a[i][1];
    for(j=2;j<m+1;j++){
        if(a[i][j]>max){
            max=a[i][j]; } }
    b[i]=max; }
mi=b[1];
for(i=2;i<n+1;i++){
    if(b[i]<mi){
        mi=b[i]; } }
printf("%d",mi);
    return 0; }