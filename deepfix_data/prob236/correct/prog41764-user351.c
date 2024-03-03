#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int book[100];
    int pos[100];
    for(int i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(int i=0;i<n;i++) {
        scanf("%d",&pos[i]); }
    for(int i=0;i<n;i++) {
        printf("%d ",book[pos[i]]); }
    printf("end");
    return 0; }