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
        for(j=n-1;j>=i;j--) {
            if(pos[i]>pos[j]) {
                temp=book[i];
                book[i]=book[j];
                book[j]=temp;
                temp=pos[i];
                pos[i]=pos[j];
                pos[j]=temp; } } }
    for(i=0;i<n;i++) {
        printf("%d ",book[i]); }
    printf("end");
    return 0; }