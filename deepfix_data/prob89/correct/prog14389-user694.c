#include <stdio.h>
int main(){
    int k,n;
    int c1=0,c2=0,c3=0;
    int a[100],b[100],c[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
         if(a[i]%2==0) {
            b[i]=a[i];
            c1++; }
        else {
            c[i]=a[i];
            c2++; } }
    int r;
    for(int h=0;h<c1;h++) {
        for(int j=0;j<c2;j++) {
            r=b[h]+c[j];
            if(r==k) {
                printf("lucky");
                return 0; } } }
        printf("unlucky");
    return 0; }