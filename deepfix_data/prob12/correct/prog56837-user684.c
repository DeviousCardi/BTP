#include <stdio.h>
int main() {
    int n,count;
    int a[200];
    int diff;
    scanf("%d\n",&n);
    diff=2*n;
    for(int i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(int i=0;i<2*n;i++) {
        count=0;
        for(int j=i+1;j<2*n;j++) {
            count++;
            if(a[j]==a[i]) {
                break; } }
        if(count<diff)
                diff=count; }
    printf("%d",diff);
    return 0; }