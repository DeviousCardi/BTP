#include <stdio.h>
int main(){
    int k,n;
    int c1=0,c2=0,c3=0;
    int a[100],b[100],c[100];
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int l=0;l<n;l++) {
        if(a[l]%2==0) {
            b[l]=a[l];
            c1++; }
        else {
            c[l]=a[l];
            c2++; } }
    int r;
    for(int h=0;h<c1;h++) {
        for(int j=0;j<c2;j++) {
            r=b[h]+c[j];
            if(r==k)
                c3++; } }
    if(c3!=0)
        printf("lucky");
    else if(c3==0)
        printf("unlucky");
    return 0; }