#include <stdio.h>
int main(){
    int n,newpos;
    scanf("%d\n",&n);
    int old_order[n];
    int new_order[n];
    for(int i=0;i<n;i++){
        scanf("%d",&old_order[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&newpos);
        new_order[newpos]=old_order[i]; }
    for(int i=0;i<n;i++){
        printf("%d ",new_order[i]); }
    printf("end");
    return 0; }