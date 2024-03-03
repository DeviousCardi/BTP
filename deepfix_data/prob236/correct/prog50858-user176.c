#include <stdio.h>
int main(){
    int n,i,j,k;
    int book[100];
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&a[j]); }
    for(k=0;k<n;k++) {
        book[k]=book[a[k]];
        printf("%d",book[k]); }
    printf("end");
    return 0; }