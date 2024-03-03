#include <stdio.h>
int main(){
    int n,temp;
    scanf("%d\n",&n);
    int old_order[n];
    for(int i=0;i<n;i++){
        scanf("%d",&old_order[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
       printf("%d ",old_order[temp]); }
    printf("end");
    return 0; }