#include <stdio.h>
int main(){
    int i=0,j,count,n,a;
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
    for(i=0,j=0;i<n;i++,j++) {
        scanf("%d",&a);
        arr[a]=arr[i]; }
    printf("end");
    return 0; }