#include <stdio.h>
int main(){
    int n,i,j,book_no[100],new_post[100];
    int new_ordr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&book_no[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&new_post[i]);
        j=new_post[i];
        new_ordr[j]=book_no[i]; }
    for(i=0;i<n;i++) {
       printf("%d ",new_ordr[i]); }
    printf("end");
    return 0; }