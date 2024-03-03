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
    c=n-1;
    for(i=0;i<n;i++) {
        for(j=n-1;j>=i;j--) {
            if(pos[i]>pos[j]) {
                book[i]=temp;
                book[i]=book[j];
                book[j]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d ",book[i]); }
    printf("end");
    return 0; }