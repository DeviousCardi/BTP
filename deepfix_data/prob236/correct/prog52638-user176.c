#include <stdio.h>
int main(){
    int n,i,j;
    int book[100];
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(j=0;j<n;j++) {
        scanf("%d",&a[j]);
    for(i=0;i<n;i++) {
    if(i==j) {
        i=a[j]; } }
    printf("%d",book[i]); }
    printf("end");
    return 0; }