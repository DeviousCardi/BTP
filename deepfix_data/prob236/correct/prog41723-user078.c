#include <stdio.h>
int main(){
    int i,j,n,ini[100],ind[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ini[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&ind[i]); }
    for(i=0;i<=n;i++) {
        if(ind[i]!=i) {
            j=ini[ind[i]];
            ini[ind[i]]=ini[i];
            ini[i]=j; } }
    for(i=0;i<n;i++) {
        printf("%d ",ini[i]); }
    printf("end");
    return 0; }