#include <stdio.h>
int main(){
    int a1,a2,n,i,j;
    scanf("%d %d %d",&a1,&a2,&n);
    for(i=a1;i<n;i=i+j-2){
        for(j=a2;j<n;j=j+i){
           printf("%d",j); }
        printf(" "); }
    return 0; }