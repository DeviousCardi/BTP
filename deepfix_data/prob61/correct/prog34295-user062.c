#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d %d",&n,&k);
    int input[n],count[k+1];
    for(i=0;i<n;i++){
        scanf("%d",&input[i]); }
    for(i=0;i<(k+1);i++){
        count[i] = 0; }
    for(i=0;i<n;i++){
        count[input[i]] += 1; }
for(i=0;i<(k+1);i++){
    for(j=0;j<count[i];j++){
        printf("%d \n",i); } }
return 0; }