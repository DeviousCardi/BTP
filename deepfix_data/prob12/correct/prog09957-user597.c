#include <stdio.h>
int main(){
    int n,i,j,k,l,min;
    int ent[400];
    int dst[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    l=0;
    for(i=0;i<200;i++){
        dst[i]=200; }
    for(i=0;i<n;i++){ {
            for(j=l+1;j<2*n;j++){
                if(ent[l]==ent[j]){
                    dst[i]=j-l;
                    break; } }
        l=l+1; } }
    printf("%d",dst[0]);
    return 0; }