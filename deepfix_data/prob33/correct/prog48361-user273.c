#include <stdio.h>
int main() {
    int h;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    for(i=1;i<=p;i++)
    scanf("%d",&i);
    for(i=1;i<=p;i++) {
        if((i+1)<i) {
          h=h+(i+1)-i; {
              if(h>0&&i==p) {
                  printf("Yes"); }
              else {
                  if(h==0&&i==p) {
                      printf("No"); } } } }
        else {
            continue; } }
    return 0; }