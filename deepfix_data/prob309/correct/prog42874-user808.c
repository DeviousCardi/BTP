#include <stdio.h>
int main()
{   int c,n,i,j;
    c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(a[i]==a[j]){
            c++; }
        if(c==a[i]){
        printf("Yes"); } }
    if(c==0){
        printf("No"); } }
    return 0; }