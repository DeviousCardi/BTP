#include <stdio.h>
int main(){
int n,a,i,j,k=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a);
        if((j=i&&a==1)&&(j!=i&&a==0)){
           printf("y"); }
        else{
    printf("m"); } } }
return 0; }