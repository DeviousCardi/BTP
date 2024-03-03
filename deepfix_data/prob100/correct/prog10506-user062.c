#include<stdio.h>
#include<limits.h>
int main(){
int m,n,i,j,s[4],l[4],max;
scanf("%d %d",&n,&m);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&s[j]); } }
for(i=0;i<m;i++){
    l[i]=s[i*n];
    for(j=1;j<n;j++){if (s[i*n+j]==' ') break;
        if (s[i*n+j]>l[i]){
            l[i]=s[i*n+j];} } }
int min=l[0];
for(i=1;i<m;i++){
    if(l[i]<min){
        min=l[i]; } }
   printf("%d",min);
    return 0; }