#include <stdio.h>
int main() {
    int n,c[10];
    scanf("%d",&n);
    char s[2*n-1];
    for(int i=0;i<2n;i++) {
        scanf("%c",&s[i]); }
    for(int i=0;i<2*n;i=i+2) {
        c[s[i]-'0']++; }
    for(int i=0;i<10;i++) {
        if(c[i]==i) {
            flag=1; } }
    if(flag==1) printf("Yes");
    else printf("No"); }