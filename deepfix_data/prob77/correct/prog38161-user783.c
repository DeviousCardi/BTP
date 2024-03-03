#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b) {
    if(a>b)
    return b;
    else
    return a; }
int main() {
    int i,n,m,l;
    int k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&m);
        arr[i]=m;
        k=max(m,k); }
    for(i=0;i<n;i++)
    {l=k;
    l=min(arr[i],l);}
    printf("%d%d",k,l);
    printf("end");
    return 0; }