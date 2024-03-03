#include <stdio.h>
int main() {
    int n,true=0;
    int a[1000];
    scanf("%d",&n);
    printf("%d\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        getchar(); }
    for(int i=0;i<n;i++) {
        printf("hi");
        int b=a[i];
        int count=0;
        for(int j=0;j<n;j++) {
            if(a[j]==b) {
                count++; } }
        if(count==b) {
            true=1; }
        else {
            true=0; } }
    if(true==1) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }