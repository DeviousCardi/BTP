#include <stdio.h>
int main(){
    int i=0,count=0,n,a;
    int ch;
    char arr[100];
    char new[100];
    ch=getchar();
    scanf("%d",&n);
    while(ch!=-1||count<n) {
        arr[i]=ch;
        ch=getchar();
        count=count+1;
        i++; }
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        new[a]=arr[i]; }
    for(a=0;a<n;a++) {
        putchar(new[a]); }
    printf("end");
    return 0; }