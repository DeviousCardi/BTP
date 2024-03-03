#include <stdio.h>
int main(){
    int n,i,p,temp;
    scanf("%d",&n);
    int books[n],order[n],new[n];
    for(i=0;i<n;i++) {
        scanf("%d",&books[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&order[i]); }
    for(i=0;i<n;i++) {
        temp=books[i];
        p=order[i];
        new[p]=temp; }
    for(i=0;i<n;i++) {
        printf("%d ",new[i]); }
    printf("end");
    return 0; }