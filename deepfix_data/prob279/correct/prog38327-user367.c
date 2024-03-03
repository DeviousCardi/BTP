#include <stdio.h>
int main() {
    int num[100000];
    int a[100000];
    int n,i,repeat,missing;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=0;i<n;i++) {
        a[num[i]-1]++; }
    for(i=0;i<n;i++) {
        if(a[num[i]-1]>1)
        repeat=num[i];
        else if(a[i]==0)
        missing=i+1; }
    printf("%d\n%d",repeat,missing);
    return 0; }