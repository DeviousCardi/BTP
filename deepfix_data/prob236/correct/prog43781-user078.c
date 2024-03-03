#include <stdio.h>
int main(){
    int i,j,n,ini[100],ind[100],inf[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ini[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&ind[i]); }
    for(i=0;i<n;i++) {
        inf[ind[i]]=ini[i]; }
    for(i=0;i<n;i++) {
        printf("%d ",inf[i]); }
    printf("end");
    return 0; }