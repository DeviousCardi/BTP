#include <stdio.h>
int main(){
    int b[100];
    int i,j,n;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<100;i++)
    b[i]=0;
    for (j=0;j<n;j++) {
        scanf("%d",&a[j]);
        i=a[j];
        b[i]=b[i]+1; }
    for (i=0;i<100;i++) {
        for (j=0;j<b[i];j++) {
        printf("%d ",i); } }
    printf("end");
    return 0; }