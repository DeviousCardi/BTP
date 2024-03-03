#include <stdio.h>
int main(){
    int k,n,i,j;
    int flag=0;
    scanf("%d\n%d",&k,&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                flag=1;break; } } }
    if(flag==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }