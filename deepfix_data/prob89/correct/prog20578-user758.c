#include <stdio.h>
int main(){
    int k,n,sum=0,num=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int nolst[n];
    for(int a=0;a<n;a++)
    scanf("%d ",&nolst[a]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=nolst[i]+nolst[j];
            if(sum==k){
                num=2;
                break; }
            sum=nolst[i]; }
        if(num==2){
            printf("lucky");
            break; } }
    if(num!=2)
    printf("unlucky");
    return 0; }