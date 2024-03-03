#include <stdio.h>
int main(){
    int k,n,list[n],i,j,r,p;
    scanf("%d%d",&n,&k);
    if((n<=1000)&&(k%2!=0)) {
        for(i=0;i<n;i++) {
            scanf("%d",&list[i]); }
        for(i=0;i<n;i++) {
            p=list[i];
            r=k-p;
            for(j=0;j<n;j++) {
                if(list[j]==r) {
                    printf("lucky"); } } } }
    return 0; }