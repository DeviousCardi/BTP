#include <stdio.h>
int main(){
    int n,i,booknumber,newindex;
    int bookposition[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&booknumber);
        bookposition[i]=booknumber; }
    for(i=1;i<=n;i++) {
        scanf("%d",&newindex);
        printf("%d",bookposition[newindex]); }
    printf("end");
    return 0; }