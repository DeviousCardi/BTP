#include <stdio.h>
int main(){
    int n,m,i;
    int a[120];
    int b[120];
    int c[120];
    int j,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(b[j]==m) {
                c[h]=j;
                h++;
                break; } } }
    for(i=0;i<n;i++) {
        printf("%d",a[c[h]]); }
    printf("end");
    return 0; }