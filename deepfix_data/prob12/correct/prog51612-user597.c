#include <stdio.h>
int main(){
    int n,i,j,l,min;
    scanf("%d",&n);
    int ent[2*n];
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    min=(2*n);
    for(i=0;i<1;i++){
        for(j=i+1;j<2*n-1;j++){
            if(ent[i]==ent[j]){
                l=j-i;
                if(l<min){
                    min=l; } } } }
    printf("%d",min);
    return 0; }