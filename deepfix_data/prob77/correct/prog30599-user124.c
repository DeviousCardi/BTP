#include <stdio.h>
int main(){
    int i,j,n,x,s,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i=i+1){
        scanf("%d",&a[i]);
        x=a[i];
        if (x>a[i-1]){
            s=x;
        }else if(x<a[i-1]){
            k=x; } }
    for(i=0;i<=n-1;i=i+1){
        if (a[i]==s){
            printf("%d ",k);
        }else if (a[i]==k){
            printf("%d ",s);
        }else{
            printf("%d ",a[i]); } }
    printf("end");
    return 0; }