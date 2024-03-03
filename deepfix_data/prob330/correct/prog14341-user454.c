#include <stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<n/2;i=i+2) {
        if(a[i]>a[i+1]&&a[i]>a[i-1]) {
            f=f+1; } }
    printf("%d",f);
    return 0; }