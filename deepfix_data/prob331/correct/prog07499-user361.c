#include <stdio.h>
int main(){
int n,arr[500],i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]); } }
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j&&arr[j]==1){;
            printf("if"); }
        else{
            printf("no"); } } }
return 0; }