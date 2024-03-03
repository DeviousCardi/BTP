#include <stdio.h>
int main(){
    int n,t,k,j;
    int check=t=k=0;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&list[i]); }
    int traverse[n];
    traverse[0]=1;
    k=list[0];
    for(j=1;j<n;j++,time=1) {
        traverse[j]=k;
        k=list[traverse[j]-1];
        for(int m=j-1;m>=0;m--) {
            if(traverse[m]==traverse[j]) {
                check=1;
                t=j;
                k=(j-m); } }
        if(check==1)
        break; }
    printf("%d %d",t,k);
    return 0; }