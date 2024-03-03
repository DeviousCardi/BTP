#include <stdio.h>
int main(){
    int k,n,sum=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int nolst[n];
    for(int a=0;a<n;a++)
    scanf("%d ",&nolst[a]);
    for(int i=0;i<n;i++){
        sum=sum+i;
        for(int j=i+1;j<n;j++){
            sum=sum+j;
            if(sum==k){
            printf("lucky");
            break; }
            sum=sum-j; }
        printf("unlucky"); }
    return 0; }