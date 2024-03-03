#include <stdio.h>
int main(){
    int n,i,booknumber,newindex;
    int bookposition[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&booknumber);
        bookposition[i]=booknumber; }
    for(i=0;i<n;i++) {
        scanf("%d",&newindex);
        newbookposition[i]=bookposition[newindex]; }
    for(i=0;i<n;i++) {
        printf("%d ",newbookposition[i]); }
    printf("end");
    return 0; }