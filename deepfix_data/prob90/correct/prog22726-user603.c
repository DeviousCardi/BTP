#include <stdio.h>
int main(){
    int lucky,n,arr[500];
    int check=0;
    scanf("%d %d",&lucky,&n);
    int list[n];
    for(int k=0;k<500;k++) {
        arr[k]=0; }
    for(int i=0;i<n;i++) {
        scanf("%d ",&list[i]);
        arr[(list[i])]++; }
    for(int j=0;j<n;j++) {
        if(((lucky-list[j])>=0)&&((lucky-list[j])<=499)&&(arr[(lucky-list[j])]>0)) {
            printf("lucky");
            check=1;
            break; } }
    if(check==0)
    printf("unlucky");
    return 0; }