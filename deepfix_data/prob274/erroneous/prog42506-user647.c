#include <stdio.h>
int main(){
    int k,i,j,l,t,n,count=0;
    scanf("%d \n",&k);
    int a[k];
    int b[2k];
    for(i=0;i<k;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<k;j++){
        b[(2*j)]=j+1;
        b[(2*j)+1]=a[j];
        for(l=0;l<(2*j);l++){
            if(b[(2*j)]==b[l]){
                n=l-(2*j);
                t=(2*j);
                count=1;
                break; } }
        if(count==1){
            break; } }
    printf("%d %d",t,k)
    return 0; }