#include<stdio.h>
#include<limits.h>
int main()
{int a[1000][1000],m,n,i,j;
scanf("%d %d",&n,&m);
for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&a[i][j]); } }
int temp,temp2;
for(i=0;i<m;i++) {
    temp=a[i][0];
    for(j=0;j<n;j++) {
        if(a[i][j]>temp) {
            temp=a[i][j]; } }
    if(i==0) {
        temp2=temp; }
    if(temp<temp2) {
        temp2=temp; } }
printf("%d",temp2);
    return 0; }