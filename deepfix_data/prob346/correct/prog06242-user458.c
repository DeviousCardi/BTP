#include <stdio.h>
int main(){
    int n,i,j, str1[n];
    scanf("%d\n",&n);
   for(j=0;j<99;j++){
     for(i=0;i<n;i++){
           scanf("%d",&str1[i]);
            if(str1[i]=j){
                printf("%d",j); } }
    printf("end");
    return 0;
} }