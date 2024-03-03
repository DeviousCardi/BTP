#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int i,n,m;
    int k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&m);
        arr[i]=m;
        k=max(m,k); }
    printf("%d",k);
    printf("end");
    return 0; }