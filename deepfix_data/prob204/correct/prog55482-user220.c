#include <stdio.h>
#include <stdlib.h>
int main(){
int n,arr[50];
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
  scanf("%d",&arr[i]); }
int j,count;
for(j=0;j<n/2;j++){
    if(arr[j]==arr[n-1-j]){
        count=1; }
    else{
        count=0; } }
if(count==1){
    printf("Yes"); }
else{
    printf("No"); }
return 0; }