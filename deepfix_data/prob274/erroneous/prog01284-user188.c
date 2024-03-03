#include <stdio.h>
int main(){
    int k,t,i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=0;j<i;j++){
            scanf("%d",&a[j]);
            int count =0;
            if(a[i]=a[j]){
                count++;
                break; }
            if(count==1){
            t=i;
            k=(i-j)+1;
            printf("%d %d",t,k);} }
    return 0; }