#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d %d",&n,&k);
    int arr[n];
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
        if(arr[j]>=arr[i])
        printf("%d",arr[j]); } } }