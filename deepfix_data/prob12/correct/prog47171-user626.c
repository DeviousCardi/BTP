#include <stdio.h>
int main() {
    int n, a[401],min=400;
    scanf("%d", &n);
    for(int i=0;i<(2*n);i++)
    scanf("%d", &a[i]);
    for(int i=0;i<((2*n)-1);i++) {
        for(int j=i+1;j<(2*n);j++) {
            if(a[i]==a[j]) {
                if(min>(j-i));
                min=j-i; } } }
    printf("%d", min);
    return 0; }