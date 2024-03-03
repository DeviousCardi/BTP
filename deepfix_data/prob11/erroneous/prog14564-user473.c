#include <stdio.h>
int f(int a[],int size,int value){
    int i,b;
    for(i=0;i<size;i++) {
        b=a[size-1]+a[i];
        if(b==value) {
            printf("YES"); } }
    return f(a[],(size-1),value); }
int main() {
    int n,s,i;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    return 0; }