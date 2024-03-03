#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int book[n],pos[n];
    int i,c=0,temp;
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&pos[i]); }
    for(i=0;i<n;i++) {
        if(pos[i]==c) {
            printf("%d ",book[i]);
            c++; }
        if(i==n && c!=(n-1)) {
            i=0; } }
    printf("end");
    return 0; }