#include <stdio.h>
int main(){
    int a,b,n, ord[101],uarr[101],arr[101];
    scanf("%d\n",&n);
    for(a=0;a<n;a++)
    scanf("%d",&uarr[a]);
    scanf("\n",&b);
    for(a=0;a<n;a++)
    scanf("%d",&ord[a]);
    for(a=0;a<n;a++) {
        arr[ord[a]]=uarr[a]; }
    for(a=0;a<n;a++) {
    printf("%d ",arr[a]); }
    printf("     end");
    return 0; }