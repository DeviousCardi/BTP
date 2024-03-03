#include <stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int book[2*n];
    int order[2*n];
    for(i=0;i<n;i++){
        scanf("%d",&book[i]); }
    for(i=0;i<n;i++){
    scanf("%d",&order[i]); }
    int new_order[2*n];
    for (i=0;i<=n;i++){
        new_order[order[i]]=book[i]; }
    for(i=0;i<n;i++){
    printf("%d",new_order[i]); }
    printf("end");
    return 0; }