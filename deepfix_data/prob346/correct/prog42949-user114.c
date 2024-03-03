#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++) {
    scanf("%d",&s[i]); }
    for(int j=0; j<100; j++) {
    for(int k=0; k<n; k++) {
        if(s[k]==j)printf("%d ",j); } }
    printf("end");
    return 0; }