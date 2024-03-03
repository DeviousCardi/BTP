#include<stdio.h>
int main(){
    int i,j,n,k,a=0;
    scanf("%d %d",&n,&k);
    int input[n],count[k+1],output[n];
    for(i=0;i<n;i++){
        scanf("%d",&input[i]); }
    for(i=0;i<(k+1);i++){
        count[i] = 0; }
    for(i=0;i<n;i++){
        count[input[i]] += 1; }
for(i=0;i<(k+1);i++){
    for(j=0;j<count[i];j++){
         a++; } }
int total = 0,oldcount;
for(i=0;i<n;i++){
    oldcount = count[i];
    count[i] = total;
    total += oldcount;
    for(j=count[i];j<total;j++){
        printf("%d ",i); } }
return 0; }