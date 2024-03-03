#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[1000];
    int i,a,b;
    for (i=0;i<=n;i++) {
        scanf("%d",&num[i]); }
    int max=num[0];
    int min=num[0];
    for (i=0;i<=n;i++) {
        if(max<num[i]){
        max=num[i];
        a=i; }
        if(min>num[i]){
        min=num[i];
        b=i; } }
    int t;
    t=max;
    max=min;
    min=t;
    for (i=0;i<n;i++) {
        printf("%d ",num[i]); }
    printf("end");
    return 0; }