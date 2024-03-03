#include <stdio.h>
int main() {
    int a[100],b[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int j=0;j<n;j++) {
        scanf("%d",&b[j]); }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(b[j]==i) {
                printf("%d ",a[j]); } } }
    printf("end");
    return 0; }