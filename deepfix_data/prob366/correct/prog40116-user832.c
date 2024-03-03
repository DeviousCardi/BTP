#include <stdio.h>
int main() {
    int n,t,min;
    scanf("%d\n",&n);
    min=2*n;
    t=2*n;
    int a[min];
    for(int i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(int i=0;i<2*n;i++) {
        if(a[i]+1) {
            for(int j=i+1;j<2*n;j++) {
                if(a[j]==a[i]) {
                    t=j-i;
                    a[j]=-1; } }
            if(t<=min) {
                min=t; } } }
    printf("%d",min);
    return 0; }