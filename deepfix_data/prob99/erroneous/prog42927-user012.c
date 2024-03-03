#include<stdio.h>
int a[21];
void maxlen(int n) {
    int t;
    int max=1; {
        t=1;
        for(int j=i;j<n;j++) {
            if(a[j]>a[0]) {
                t=t+1; } }
    printf("%d",t); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    maxlen(n);
    return 0; }