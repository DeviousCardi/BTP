#include <stdio.h>
void print_number(int k) { {
        printf("%d ",k); }
    return; }
int main() {
    int n;
    scanf("%d\n",&n);
    int num[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    int d;
    scanf("%d",&d);
    for(int j=0;j<n;j++) {
    print_number(num[(n-d+j)%n]); }
return 0; }