#include <stdio.h>
int main(){
int n,a,i,j,k=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a);
        if((j==i+1&&a==1)&&(j!=i+1&&a==0)){
            k=1; } } }
if(k==1){
    printf("y"); }
else{
    printf("m"); }
return 0; }