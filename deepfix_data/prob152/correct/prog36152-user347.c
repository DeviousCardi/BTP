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
    if(sum==1)
    return;
    check((a+1),i-1,k);
    return; }
int main() {
    int n,p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        {scanf("%d",&a[i]);
        p=p+a[i];}
        sum=0;
        if(p%2==1) {
            printf("NO");
            return 0; }
    check(a,n,p/2);
    if(sum==0)
    printf("NO");
    return 0; }