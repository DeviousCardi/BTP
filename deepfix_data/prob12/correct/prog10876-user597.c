#include <stdio.h>
int main(){
    int n,i,j,l,min;
    scanf("%d",&n);
    int ent[2*n];
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    min=2*n;
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(ent[i]==ent[j]){
                l=j-i;
                if(l<min){
                    min=l; } } } }
    printf("%d",ent[2]);
    return 0; }