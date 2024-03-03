#include <stdio.h>
int main() {
    int i,j=0;
    int n1,n2;
    int p,q=0;
    scanf("%d",&n1);
    int a1[n1];
    while(i<n1){
        scanf("%d",&a1[i]);
        i++; }
    int a2[n2];
    scanf("%d",&n2);
    while(j<n1){
        scanf("%d",&a2[i]);
        j++; }
    while(p<n2){
        if (a2[p]=a1[q]){p++;}
        q++; }
    return 0; }