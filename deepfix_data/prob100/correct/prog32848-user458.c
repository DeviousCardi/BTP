#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,max;
scanf("%d%d\n",&n,&m);
int a[n][m],b[n];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]); }
    printf("\n"); }
for(i=0;i<n;i++){
    max=a[i][0];
    for(j=0;j<m;j++){
        if(a[i][j]>max){
            max=a[i][j]; } }
    b[i]=max;
    printf("\n"); }
max=b[0];
for(i=0;i<n;i++){
    if(b[i]<max){
        max=b[i]; } }
printf("%d",max);
    return 0; }