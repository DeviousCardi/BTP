#include <stdio.h>
int main() {
    int n,count=0;
    int i,j;
    int s[100];
    scanf("%d",&n);
    for(i=0;i!=EOF;i++) {
        scanf("%d",&s[i]);
        for(j=0;j!=EOF;j++) {
            if (s[i]==s[j]) {
            count=count+1; } }
    if(count==s[i]) {
        printf("Yes"); }
    else {
        printf("No");
     }} }