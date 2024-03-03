#include <stdio.h>
#define MIN 100000
void swap(int a,int b) {
    a=a+b;
    b=a-b;
    a=a-b; }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int chair[n];
    int i,j,min=0;
    int add;
    for(i=0;i<n;i++) {
        scanf("%d",&chair[i]); }
    for(j=0;j<k;j++) {
        for(i=0;i<n;i++;min=MIN) {
            if(min>a[i]) {
                min = a[i];
                add=i; } }
        chair[add]=-1; }
    int max=0;
    for(i=0;i<n;i++) {
        if(max<char[i]) max=chaar[i]; }
    printf("%d",max);
    return 0; }