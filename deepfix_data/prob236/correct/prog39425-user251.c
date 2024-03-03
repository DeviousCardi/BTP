#include <stdio.h>
int main(){
    int i,n,a,b;
    int arr[100];
    int new[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&b);
        arr[i]=b; }
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        new[a]=arr[i]; }
    for(a=0;a<n;a++) {
        printf("%d ",new[a]); }
    printf("end");
    return 0; }