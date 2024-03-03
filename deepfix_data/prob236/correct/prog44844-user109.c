#include <stdio.h>
int main(){
    int n,temp;
    scanf("%d\n",&n);
    int old_order[n];
    int s_no[n];
    for(int i=0;i<n;i++){
        scanf("%d",&old_order[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&s_no[i]); }
    for(int i=0;i<n;i++){
        printf("%d ",old_order[s_no[i]]); }
    printf("end");
    return 0; }