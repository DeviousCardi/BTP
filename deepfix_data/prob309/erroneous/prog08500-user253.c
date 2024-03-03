#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[n],occ[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]);
        occ[i]=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(num[i]==num[j])
                occ[i]++; } }
    for(i=0;i<n;i++) {
        if(num[i]==occ[i])
            printf("Yes");
        else
            printf("No"); }
    return 0; }