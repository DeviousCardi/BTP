#include <stdio.h>
int main(){
    int k,n,i,j,r,p,count,occ[1001];
    scanf("%d%d",&k,&n);
    int list[n];
    for(i=0;i<n;i++) {
        scanf("%d",&list[i]); }
    for(i=0;i<1001;i++) {
        occ[i]=0; }
    for(i=0;i<n;i++) {
        occ[list[i]]++; }
    count=0;
    for(i=1;i<1001;i++) {
        if((occ[i]>0)&&(occ[k-i]>0)) {
            printf("lucky");
            count++;
            break; } }
    if(count==0)
        printf("unlucky");
    return 0; }