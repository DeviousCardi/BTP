#include <stdio.h>
int main() {
    int num,i,c[100],j;
    char ch[100];
    scanf("%d\n",&num);
    for(i=0;i<2*num;i++) {
          scanf("%c",&ch[i]); }
    for(i=0;i<num;i++) {
        while(j%2!=0&&j<2*num) {
            c[i]=ch[j];
            printf("%d ",c[i]); } }
    return 0; }