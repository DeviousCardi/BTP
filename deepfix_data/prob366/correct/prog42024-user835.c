#include <stdio.h>
int min(int a,int b) {
    if(a<b) {
        return a; }
    else {
        return b; } }
int main() {
    int num1,i,j,a[100],b[100],h,k;
    scanf("%d",&num1);
    for(i=0;i<(2*num1);i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<num1;i++) {
        for(j=i+1;j<2*num1;j++) {
            if(a[i]==a[j]&&i!=j) {
                  b[i]=j-i; }
            else {
                continue; } }
        printf("%d\n",b[i]); }
    for(i=0;i<2*num1;i++) {
        h=min(b[i],b[i+1]);
        for(j=i+2;j<2*num1;j++) {
            k=min(h,b[j]); }
        if(h==k)
        break; }
    printf("%d",h);
    return 0; }