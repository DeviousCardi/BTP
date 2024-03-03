#include <stdio.h>
int main(){
    int k,i,j,l,t,n,count=0;
    scanf("%d \n",&k);
    int a[k+1];
    for(i=1;i<=k;i++){
        scanf("%d ",&a[i]); }
    int b[3*k];
    b[1]=1;
    for(j=1;j<=k;j++){
        b[(j+1)]=b[(a[b[j]])];
        printf("%d ",b[j]);
        for(l=0;l<(j+1);l++){
            if(b[j+1]==b[l]){
                t=j;
                n=(j+1)-l;
                count=1;
                break; } }
        if(count==1)
               break; }
    printf("%d %d",t,n);
    return 0; }