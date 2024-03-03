#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[1000];
    int i;
    for (i=0;i<=n;i++) {
        scanf("%d",&num[i]);
        while(i>=1) {
            if(num[i]>num[i-1])
            printf("%d",num[i-1]);
            else
            continue; } }
    printf("end");
    return 0; }