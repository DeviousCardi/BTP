#include <stdio.h>
int main() {
    int h;
    int hf;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    int flag=0;
    for(i=1;i<=p;i++) {
        scanf("%d%d",&hi,&hf);
        if(hf<hi) {
          h=h+hf-hi; {
              if(h>0) {
                  flag=1; }
              else {
                  if(h==0) {
                      flag=-1; } } } }
        else {
            continue; } }
    if(flag==1) {
        printf("Yes"); }
    else {
        if(flag==-1) {
            printf("No"); } }
    return 0; }