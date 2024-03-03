#include <stdio.h>
int main() {
    int n, a[400],d[200],min=400,c=0;
    scanf("%d", &n);
    for(int i=0;i<(2*n);i++)
    scanf("%d", &a[i]);
    for(int i=0;i<((2*n)-1);i++) {
        for(int j=i+1;j<(2*n);j++) {
            if(a[i]==a[j]) {
                d[c]=(j-i);
                c++; } } }
    for(int i=0;i<n;i++) {
        if(min>d[i])
        min=d[i]; }
    printf("%d", min);
    return 0; }