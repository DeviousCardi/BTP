#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int book[n],pos[n];
    int i,j,c=0,temp;
    for(i=0;i<n;i++) {
        scanf("%d",&book[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&pos[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<(n-1);j++) {
            if(pos[j]>pos[j+1]) {
                book[j]=temp;
                book[j]=book[j+1];
                book[j+1]=temp;
                pos[j]=temp;
                pos[j]=pos[j+1];
                pos[j+1]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d ",book[i]); }
    printf("end");
    return 0; }