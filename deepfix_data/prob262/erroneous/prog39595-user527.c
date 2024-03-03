#include<stdio.h>
#include<strings.h>
void out(int n) {
        if(n==0)
            return;
        out(n-1);
        printf("%d",a[n]);
        return; }
int main() {
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    out(n-1);
    return 0; }