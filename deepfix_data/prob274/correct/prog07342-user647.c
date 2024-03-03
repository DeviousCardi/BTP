#include <stdio.h>
int main(){
    int k,i,j,l,t,n,count=0;
    scanf("%d \n",&k);
    int a[k];
    int b[3*k];
    for(i=0;i<k;i++){
        scanf("%d ",&a[i]); }
    b[0]=1;
    for(j=0;j<k;j++){
        b[(j+1)]=b[a[j]];
        printf("%d",b[j]);
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