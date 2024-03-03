#include <stdio.h>
int main(){
    int a[10000];
    int b[100];
    int i,j,n;
    scanf("%d\n",&n);
    for (j=0;j<n;j++) {
        scanf("%d",&a[j]);
        i=a[j];
        b[i]=b[i]+1; }
    for (j=0;j<100;j++) {
        for (i=0;i<b[i];i++) {
        printf("%d ",i); } }
    printf("end");
    return 0; }