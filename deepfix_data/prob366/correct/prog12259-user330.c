#include <stdio.h>
int main(){
    int a[400];
    int n,i,j,c[200],b;
    scanf("%d",&n);
    for(i=0;i<=2*n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++){
        for(j=n;j<=2*n-1;j++){
            if(a[j]==a[i]){
                c[i]=j-i;
                break; } } }
    b=c[0];
    for(j=1;j<i;j++){
        if(c[j]<b)b=c[j]; }
    printf("%d",b);
    return 0; }