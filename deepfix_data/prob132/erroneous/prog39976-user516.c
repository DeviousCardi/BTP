#include <stdio.h>
int main() {
    int n,sum=1;
    scanf("%d",&n);
    int a[n+1];
    int count[n+1];
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
    count[i]=0;}
    for(int i=1;i<=n;i++){
        if(a[i+1]==a[i])
            for(int j=1;j<=n;j++){
            count[j]=sum+1; }
    return 0; }