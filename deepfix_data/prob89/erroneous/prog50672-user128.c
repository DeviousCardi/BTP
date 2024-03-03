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
            int k=0,j=1;
            for(;j<n-1;j++){
                if(c1==0)
                    break
                for(;k<n;k++){
                    if(lis[j]+lis[k]==l){
                        printf("lucky");
                        c1=0}
                    else{
                        break; } } }
        if(c1==1)
            printf("unlucky"); } }
    return 0; }