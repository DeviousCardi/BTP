#include <stdio.h>
int main(){
    int total;
    scanf("%d",&total);
    int a[total];
    int i;
    for(i=0;i<total;i++){
        scanf("%d",&a[i]); }
    int b[total];
    for(i=0;i<total;i++){
        scanf("%d",&b[i]); }
    int c[total];
    for(i=0;i<total;i++){
        c[b[i]]=a[i]; }
    for(i=0;i<total;i++){
        printf("%d ",c[i]); }
    printf("end");
    return 0; }