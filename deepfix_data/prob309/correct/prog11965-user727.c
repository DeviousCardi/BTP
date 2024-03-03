#include <stdio.h>
int main() {
    int n,i,j,countRep,a[10000];
    char comma;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        scanf("%c",&comma); }
    for(i=0;i<n;i++) {
        countRep=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            countRep++; }
        if(countRep!=a[i]) {
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }