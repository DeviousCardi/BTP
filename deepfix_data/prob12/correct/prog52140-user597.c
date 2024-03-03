#include <stdio.h>
int main(){
    int n,i,j,k,min;
    int ent[400];
    int dst[200];
    int id[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            for(k=0;k<2*n-k;k++){
                if(ent[j]==ent[k]){
                    dst[i]=(k-j);
                    id[i]=ent[j];
                    break; } } } }
    min=400;
    for(i=0;i<n;i++){
        if(dst[i]<min){
            min=dst[i]; } }
    printf("%d",id[min]);
    return 0; }