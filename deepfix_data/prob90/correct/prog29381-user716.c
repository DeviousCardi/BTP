#include <stdio.h>
int main(){
    int k,n;
    scanf("%d",&k);
    scanf("%d",&n);
    int ip[n];
    int i,j,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        ip[i]=j; }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j!=i){
            sum=ip[i]+ip[j];
            if(sum==k){printf("lucky");return 0;}
            else{continue;} } } }
    printf("unlucky");
    return 0; }