#include <stdio.h>
int main(){
    int k,n;
    scanf("%d",&k);
    scanf("%d",&n);
    int ip[n];
    int i,j,l;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        ip[i]=j; }
    for(i=0;i<=((k/2)+1);i++){
        j=0;
        while(j<n){
            if(ip[j]==i){
                for(l=j+1;l<=n;l++){
                    if(ip[l]==k-1){printf("lucky");return 0;}} }
            else{j+=1;} } }
    printf("unlucky");
    return 0; }