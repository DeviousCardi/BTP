#include <stdio.h>
int main(){
    int l,n,i=0,c1=1,c2=0;
    scanf("%d%d",&l,&n);
    int lis[n];
    for(;i<n;i++){
        scanf("%d",&lis[i]); }
    if(n==1){
        printf("unlucky"); }
    else{
        int j=0,k=1;
        for(;j<n-1;j++){
            if(c2==1)
                break;
            for(;j<n;j++){
                if((lis[j]+lis[k])==l){
                    printf("lucky");
                    c2=1;
                    c1=1;
                    break; }
                else
                    c1=0; } }
        if(c1==0)
            printf("unlucky"); }
    return 0; }