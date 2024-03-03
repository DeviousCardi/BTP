#include <stdio.h>
int main(){
    int l,n,i=0,c1=1;
    scanf("%d%d",&l,&n);
    int lis[n];
    for(;i<n;i++){
        scanf("%d",&lis[i]); }
    if((l%2)!=0){
        if(n==1){
            printf("unlucky"); }
        else{
            int k=0,j=0;
            for(;j<n;j++){
                if(c1==0)
                    break;
                for(k=1;k<n;k++){
                    if((lis[j]+lis[k])==l){
                        printf("lucky");
                        c1=0;} } }
        if(c1==1)
            printf("unlucky"); } }
    else
        printf("unlucky");
    return 0; }