#include<stdio.h>
int a[21];
void maxlen(int n) {
    int t;
    int max=n;
        for(int j=0;j<n;j++) {
            t=1;
            for(int i=j+1;i<n;i++) {
            if(a[i]>a[j]) {
                t=t+1; } }
          if(max>t)
          max=t; }
    printf("%d",max); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    maxlen(n);
    return 0; }