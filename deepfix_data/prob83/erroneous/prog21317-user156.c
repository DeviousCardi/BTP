#include <stdio.h>
int rearrange(int *,int ,int );
int main() {
    int n,d,i;
    scanf("%d\n",&n);
    int ar[n+100];
    for(i=0,i<n;i++) {
        scanf("%d",&ar[i]); }
    scanf("\n");
    scanf("%d\n",&d);
    rearrange(ar,n,d);
    for(i=0;i<n;i++)
    printf("%d ",ar[i]);
    return 0; }
int rearrange(int *a,int n,int d) {
    int i;
    for(i=n-1;i>=0;i--) {
        *(a+(i+d))=*(a+i); }
    for(i=0;i<d,i++) {
        *(a+i)=*(a+n+i); } }