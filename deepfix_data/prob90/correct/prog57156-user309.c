#include <stdio.h>
int main(){
    int k,n,i,j=0,t,p=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        t=x[i];
        if(j=0){
            j++; }
        while(j<n && j!=i){
            j++;
            if(k==t+x[j]){
                p=1;
                printf("lucky");
                break; } }
        if(p==1)
        break; }
    if(p==0)
    printf("unlucky");
    return 0; }