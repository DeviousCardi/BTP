#include<stdio.h>
#include<string.h>
int product(a[],size) {
    if (size==1)return a[size-1];
    else return a[size-1]*product(a,size-1); }
int main() {
    int n,p;
    scanf("%d\n",&n);
    int s[10000],count=0;
    for (int i=0;i<10000<;i++){
        scanf("%d ",&a[i]); }
    p=product(s,count);
    printf("%d",p);
    return 0; }