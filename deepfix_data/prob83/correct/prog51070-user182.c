#include <stdio.h>
void fun(int n,int a[],int d) {
    int i,j;
    for(j=0;j<d;j++) {
        for(i=0;i<n;i++)
        {   if (i==(n-1)) {
                a[i]=a[0]; }
            else {
                a[i]=a[i+1]; }
            if(i==n-2) {
                a[i]=a[0]; } } } }
int main() {
    int i,n,d;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    fun(n,a,d);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }