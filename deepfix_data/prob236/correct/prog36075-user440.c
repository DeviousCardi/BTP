#include <stdio.h>
int main(){
    int n,old_book[100],i,j,new_book[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&old_book[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&j);
        new_book[j]=old_book;
        printf("%d ",new_book); }
    printf("end");
    return 0; }