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
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(pos[i]>pos[j]) {
                book[i]=temp;
                book[i]=book[j];
                book[j]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d ",book[i]); }
    printf("end");
    return 0; }