#include <stdio.h>
int sum,n;
void check(int a[],int size,int key) {
    if(size==0)
    return;
    if(a[0]==key) {
        printf("YES");
        sum=1;
        return; }
    check(a+1,n-1,key-a[0]);
    if(sum==1)
    return;
    check(a+1,n-1,key);
    return; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    check(a,n,k);
    if(sum==0)
    printf("YES");
    return 0; }