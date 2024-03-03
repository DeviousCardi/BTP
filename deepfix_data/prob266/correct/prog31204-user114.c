#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int sum=n%10+n/10%10+n/100%10+n/1000%10  ;
    for( i=2016; ;i++) {
        if(i%sum==0) {
            break; } }
    printf("%d",i);
    return 0; }