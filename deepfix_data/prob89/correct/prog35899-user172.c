#include <stdio.h>
int main(){
    int k,n;
    int a[100];
    scanf("%d\n%d",&k,&n);
    int i,j,x;
    x=2;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=i+1;j<n;j++){
            scanf("%d",&a[j]);
            if(a[i]+a[j]==k){
                printf("lucky");
                x=1;
                break; } }
        if(x==1){
            break; } }
    if(x==2){
        printf("unlucky"); }
    return 0; }