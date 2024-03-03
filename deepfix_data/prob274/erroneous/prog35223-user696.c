#include <stdio.h>
int main(){
    int i,x,n,l;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1,j=1;i<n;i=x,j++) {
        x=a[i];
        if(x==a[1]&&i!=1) {
            break; }
        scanf("%d",&a[i]); }
        printf("%d ",j);
        printf("%d",a[j-1]);
    return 0; }