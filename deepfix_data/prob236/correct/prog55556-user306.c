#include <stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int book[n];
    int order[n];
    for(i=0;i<n;i++){
        scanf("%d",&book[i]);
        scanf("%d",&order[i]); }
    int new_order[n];
    for (i=0;i<=n;i++){
        new_order[order[i]]=book[i]; }
    for(i=0;i<n;i++){
    printf("%d",new_order[i]); }
    printf("end");
    return 0; }