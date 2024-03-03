#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,a[n][m],b[n],max;
scanf("%d%d\n",&n,&m);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]); }
    printf("\n"); }
for(i=0;i<n;i++){
    max=a[i][0];
    for(j=1;j<m;j++){
        if(a[i][j]>max){
            max=a[i][j]; } }
    scanf("%d",&b[i]);
    printf("\n"); }
max=b[0];
for(i=1;i<n;i++){
    if(b[i]<max){
        max=b[i]; } }
printf("%d",max);
    return 0; }