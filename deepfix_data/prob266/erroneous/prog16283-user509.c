# include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n!=0) {
        z=n%10;
        sum=sum+z;
        n=n/10; }
    for(i=2016;;i++) {
        if(i%sum==0) {
            printf("%d",i);
            break; } } }