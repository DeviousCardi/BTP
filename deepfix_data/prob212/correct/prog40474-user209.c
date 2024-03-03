#include <stdio.h>
int main() {
    int n,count=1,sum;
    scanf("%d", &n);
    for (; n!=0 ;n/=10)
        sum=n%10;
    for (int i=2015;count==1 ;i++) {
        if(i%sum==0) {
            printf("%d",i);
            count=0; } }
    return 0; }