#include <stdio.h>
int main(){
    int n,temp;
    scanf("%d\n",&n);
    int old_order[n];
    int new_order[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&old_order[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        new_order[i]=old_order[temp]; }
    for(int i=0;i<n;i++){
        printf("%d ",new_order[i]); }
    printf("end");
    return 0; }