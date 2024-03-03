#include <stdio.h>
int main(){
    int k,n;
    int c1=0,c2=0,c3=0;
    int a[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int r;
    for(int h=0;h<n;h++) {
        for(int j=1;j<n;j++) {
            r=a[h]+a[j];
            if(r==k) {
                printf("lucky");
                return 0; } } }
        printf("unlucky");
    return 0; }