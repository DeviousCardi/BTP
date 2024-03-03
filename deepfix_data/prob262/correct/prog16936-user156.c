#include<stdio.h>
#include<strings.h>
int main() {
    int n;
    int i;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    for(i=0;i<n;i++)
    printf("%d ",ar[i]);
       return 0; }