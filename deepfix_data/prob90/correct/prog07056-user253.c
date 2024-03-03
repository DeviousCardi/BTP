#include <stdio.h>
int main(){
    int k,n,list[n],i,j,r,p,count,occ[500];
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&list[i]); }
    for(i=0;i<500;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(list[j]==i) {
                count=count+1; } }
        occ[i]=count; }
    for(i=0;i<k;i++) {
        if((occ[i]>0)&&(occ[k-i]>0)) {
            printf("lucky"); }
        if((occ[i]==0)||(occ[k-i]==0)) {
            printf("unlucky"); } }
    return 0; }