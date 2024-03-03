#include <stdio.h>
int main(){
int n,arr[500],i,j,k=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]); } }
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j&&arr[j]==1){;
           k=1; }
        if(i!=j&&arr[j]!=0){
            k=0; } } }
if(k==1){
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
else{
            printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
return 0; }