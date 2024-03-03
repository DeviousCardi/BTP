#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char a[n*2];
    for(int i=0;i<(2*n)-1;i++) {
        scanf("%c",&a[i]); }
    for(int i=0;i<(2*n)-1;i++) {
        printf("%c\n",a[2*i]); }
    return 0; }