#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    char b[n];
    for(int i=0;i<(2*n)-1;i++) {
        if(i%2==0)
        scanf("%d",&a[i]); }
    for(int i=0;i<(2*n)-1;i++) {
        if(i%2==0)
        printf("%d\n",a[2*i]); }
    return 0; }