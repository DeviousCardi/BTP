#include <stdio.h>
int main(){
    int i;
    int j=0;
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("\n");
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++){
        i=b[j];
        printf("%d",a[j]); }
    printf("end");
    return 0; }