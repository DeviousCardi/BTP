#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a=0,b;
    for(int i=0;i<n;i++) {
        scanf("%d ",&b);
        a=a+b; }
    if(!(a%2))
    printf("YES");
    else
    printf("NO");
    return 0; }