#include <stdio.h>
int main() {
    int n,i,newpos,arr[105],arr2[105];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
            scanf("%d", &arr[i]); }
    for(i=0; i<n; i++) {
            scanf("%d",&newpos);
            arr2[newpos]=arr[i]; }
    for(i=0; i<n; i++) {
            printf("%d ",arr2[i]); }
    printf("end");
    return 0; }