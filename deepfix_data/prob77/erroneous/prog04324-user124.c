#include <stdio.h>
int main(){
    int i,j,n,x,s,k,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i=i+1){
        scanf("%d",&a[i]);
        x=a[i];
        if (x>a[i-1]){
            s=x;
        }else if(x<a[i-1]){
            k=x; }
    }temp=s;
    s=k;
    k=temp;
    for(j=0;j<=n;j=j+1){
        printf("%d",&a[i]) }
    printf("end");
    return 0; }