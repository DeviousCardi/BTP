#include <stdio.h>
int main(){
    int i,j,x,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=n;j=j+1){
            scanf("%d",&x);
            if((i==j && x==1) && (i!=j && x==0)){
             printf("fa");}
            else{
                printf("dgg"); } } }
    return 0; }