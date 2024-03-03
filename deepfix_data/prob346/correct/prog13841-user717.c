#include <stdio.h>
int main() {
    int i=0;
    int n,a;
    scanf("%d\n",&n);
    int ar[100];
    for(i=0;i<n;i++) {
        scanf("%d ",&a);
        ar[a]+=1; }
    while(ar[i]>0) {
        printf("%d ",i);
        ar[i]=ar[i]-1; }
    printf("end");
    return 0; }