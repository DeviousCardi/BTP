#include <stdio.h>
int main(){
    int n,i,j,k,l,min;
    int ent[400];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    min=200;
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(ent[i]==ent[j]){
                l=j-i;
                if(l<min){
                    min=l; } } } }
    printf("%d",min);
    return 0; }