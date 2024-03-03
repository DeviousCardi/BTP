#include <stdio.h>
void fun(int n,int a[],int d) {
    int i,j,t;
    for(j=0;j<d;j++) {
        t=a[n-1];
        for(i=n-1;i<=0;i--) {
                a[i]=a[i-1];
                if(i==0)
                a[i]=a[n-1]; } } }
int main() {
    int i,n,d;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    fun(n,a,d);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }