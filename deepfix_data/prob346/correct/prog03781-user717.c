#include <stdio.h>
int main() {
    int i=0;
    int n,a;
    scanf("%d\n",&n);
    int ar[100];
    for(i=0;i<100;i++) {
        ar[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d ",&a);
        ar[a]+=1; }
    for(i=0;i<100;i++) {
    while(ar[i]>0) {
        printf("%d ",i);
        ar[i]--; } }
    printf("end");
    return 0; }