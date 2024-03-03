#include <stdio.h>
int main(){
    int a[100];
    int n,t=0,k=0,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++){
        if(a[i]!=i) t++; }
    for(i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]==a[j]) k++; } }
    k=n-k-1;
    printf("%d %d",t,k);
    return 0; }