#include <stdio.h>
int main() {
    int num,i;
    char ch[100];
    scanf("%d\n",&num);
    for(i=0;i<num;i++) {
       if(ch[i]!=',') {
          scanf("%c",&ch[i]);
          printf("%c",ch[i]); }
       else {
           continue; } }
    return 0; }