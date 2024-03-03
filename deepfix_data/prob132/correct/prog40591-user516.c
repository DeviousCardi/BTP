#include <stdio.h>
int main() {
    int n,sum,p=0;
    scanf("%d",&n);
    int a[n+1];
    int count[n+1];
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
    count[i]=1; }
    for(int i=1;i<=n;i++){
        sum=1;
        for(int j=i+1;j<=n;j++){
            if(a[j]==a[i]){
                sum=sum+1; } }
        count[i]=sum; }
    for(int i=1;i<=n;i++){
        if(count[a[i]]==i){
            p=p+count[a[i]]; } }
    printf("%d",p);
    return 0; }