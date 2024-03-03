#include <stdio.h>
int main(){
    int a[10000],b[100],n,c;
    scanf("%d",&n);
    for(int i=0;i<99;i++){
        b[i]=0; }
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        b[c]=b[c]+1; }
    for(int i=0;i<99;i++){
        for(int j=1;j<b[i];j++){
            printf("%d ",i); } }
    printf("end");
    return 0; }