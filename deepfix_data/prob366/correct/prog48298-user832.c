#include <stdio.h>
int main() {
    int n,t=0,min;
    scanf("%d",&n);
    min=2*n;
    int a[2*n];
    for(int i=1;i<=2*n;i++) {
        scanf("%d",&a[i-1]); }
    for(int i=1;i<=2*n;i++) {
        if(a[i-1]+1) {
            for(int j=i+1;j<=2*n;j++) {
                if(a[j-1]==a[i-1]) {
                    t=j-i;
                    a[j-1]=-1; } }
            if(t<min) {
                min=t; } } }
    printf("%d",min);
    return 0; }