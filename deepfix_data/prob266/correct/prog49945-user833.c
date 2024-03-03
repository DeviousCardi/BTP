#include <stdio.h>
int main(){
    int n, j, sum;
    int a[4];
    scanf("%d", &n);
    a[3] = n%10;
    a[2] = (n/10)%10;
    a[1] = (n/100)%10;
    a[0] = (n/1000);
    sum = a[0]+a[1]+a[2]+a[3];
    for (j=n; j<(n+1000); j++){
        if (j%sum==0){
            printf("%d", j);
            break; } }
    return 0; }