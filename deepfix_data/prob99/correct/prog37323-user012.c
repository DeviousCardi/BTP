#include<stdio.h>
int a[1001];
void maxlen(int n) {
    int t;
    int max=0;
    for(int i=0;i<n;i++) {
        t=0;
        for(int j=i;j<n;j++) {
            if(a[j]>a[i]) {
                t=t+1; } }
         if(t>max)
            max=t; }
    printf("%d",max); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    maxlen(n);
    return 0; }