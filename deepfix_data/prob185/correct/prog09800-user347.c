#include<stdio.h>
int sum;
void check(int a[],int i,int k) {
    if(i==0)
    return;
    if(a[0]==k) {
        printf("YES");
        sum=1;
        return; }
    check((a+1),i-1,k-a[0]);
    check((a+1),i-1,k);
    return; }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        sum=0;
    check(a,n,k);
    if(sum==0)
    printf("NO");
    return 0; }