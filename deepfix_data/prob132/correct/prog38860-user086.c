#include <stdio.h>
void num(int start,char ch[]) {
    int end=start,i=start,p=1,count=0;
    while(ch[i]!='\0'||ch[i]!=',') {
        end++;
        i++; }
    end--;
    printf("%d",count); }
int main() {
    char m[]="12,1,2,11";
    int start=0;
    num(start,m);
    return 0; }