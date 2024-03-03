#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,max,mi;
scanf("%d%d\n",&n,&m);
int a[n][m],b[n];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]); } }
for(i=0;i<n;i++){
    max=a[i][0];
    for(j=0;j<m;j++){
        if(a[i][j]>max){
            max=a[i][j]; } }
    b[i]=max; }
mi=b[0];
for(i=1;i<n;i++){
    if(b[i]<mi){
        mi=b[i]; } }
printf("%d",mi);
    return 0; }