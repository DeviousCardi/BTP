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
    for(j=1;j<n;j++) {
        traverse[j]=k;
        k=list[traverse[j]-1];
        for(int m=j-1;m>=0;m--) {
            if(traverse[m]==traverse[j]) {
                check=1;
                k=(j-m);
                break; } }
        if(check==1)
        break; }
    t=j;
    printf("%d %d %d",t,k);
    return 0; }