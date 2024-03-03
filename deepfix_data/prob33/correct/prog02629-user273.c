#include <stdio.h>
int main() {
    int h;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    for(i=1;i<=p;i++)
    scanf("%d",&i);
    int flag=0;
    for(i=1;i<=p;i++) {
        scanf("%d",&i);
        int hf=i+1;
        int hi=i;
        if(hf<hi) {
          h=h+hf-hi; {
              if(h>0&&i==p) {
                  flag=1; }
              else {
                  if(h==0&&i==p) {
                      flag=-1; } } } }
        else {
            continue; } }
    if(flag==1) {
        printf("Yes"); }
    else {
        if(flag==(-1)) {
            printf("No"); } }
    return 0; }