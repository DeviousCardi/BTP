#include<stdio.h>
#include<limits.h>
int main()
{int m,n,i,j,s[1000],l[100],max;
scanf("%d %d",&n,&m);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&s[j]); } }
for(i=0;i<m;i++){
    l[i]=a[i*n];
    for(j=1;j<n;j++){
        if (a[i*n+j]>l[i]){
            l[i]=a[i*n+j];} }
min=l[0];
for(i=1;i<m;i++){
    if(l[i]<min){
        min=l[i] }
    return 0;