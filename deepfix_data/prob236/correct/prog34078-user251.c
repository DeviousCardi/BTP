#include <stdio.h>
int main(){
    int i=0,n,a;
    char arr[100];
    char new[100];
    scanf("%d\n",&n);
    scanf("%s",arr);
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        new[a]=arr[i]; }
    for(a=0;a<n;a++) {
        printf("%c",new[a]); }
    printf("end");
    return 0; }