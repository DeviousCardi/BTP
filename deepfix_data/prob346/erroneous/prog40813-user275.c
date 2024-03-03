#include <stdio.h>
int main(){
    int
    scanf("%d",&n);
    for(int i=0;i<99;i++){
        b[i]=0; }
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        b[c]=b[c]+1; }
    for(int i=0;i<99;i++){
        for(j=1;j<b[i];j++){
            printf("%d ",i); } }
    printf("end");
    return 0; }