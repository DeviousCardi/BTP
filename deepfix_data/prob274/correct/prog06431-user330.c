#include <stdio.h>
int main(){
    int n,b,c[1000],d=0,i,j;
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]); }
    b=a[1];
    for(i=2;;i++){
        c[i]=b;
        b=a[b];
        for(j=2;j<=i;j++){
           if(c[i]==c[j]){
             d=i-j;
             break; } } }
    printf("%d",d);
    return 0; }