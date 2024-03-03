#include <stdio.h>
int main(){
    int k[100],a,j,i,n;
    scanf("%d",&n);
    for(i=0;i<=99;i++){
        k[i]=0;}
    for(i=0;i<n;i++){
        scanf("%d",&a);
        k[a]=k[a]+1; }
    for(i=0;i<=99;i++){
        for(j=0;j<k[i];j++){
            printf("%d ",i);}}
    printf("end");
    return 0; }