#include <stdio.h>
int main() {
    int n,count=0;
    int cnt =0;
    int i,j;
    int s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf(",%d",&s[i]);
        for(j=0;j<n;j++) {
            if (s[i]==s[j]) {
            count=count+1; }
            else {
              continue; }
        if(count==s[i]) {
        cnt=cnt+1; }
          break; } }
    if(cnt==n) {
        printf("Yes"); }
    else {
        printf("No"); } }