#include <stdio.h>
int main(){
    int n,k,j,i,c=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]+a[j]==k){
                c++;
                printf("lucky");
            break; }
         if(a[i]+a[j]==k)
             break;
             printf("%d,%d",i,j); } }
    if(c==0)
    printf("unlucky");
    return 0; }