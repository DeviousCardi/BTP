#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++; } }
        if(c==a[i]){
            continue; }
        else{
            printf("No");
            break; } }
    if(i==n){
        printf("Yes"); }
    return 0; }