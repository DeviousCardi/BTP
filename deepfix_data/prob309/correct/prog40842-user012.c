#include <stdio.h>
int main() {
    int  n;
    scanf("%d\n",&n);
    int a[n+1];
    for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    int count;
    int c[n+1];
    for(int i=0;i<n;i++) {
        count=0;
        for(int j=0;j<n;j++) {
            if(a[i]==a[j])
            count=count+1; }
        c[i]=count; }
    int t=0;
    for(int i=0;i<n;i++) {
        if(a[i]==c[i])
        t=t+1; }
    if(t==n)
    printf("Yes");
    else
    printf("No");
    return 0; }