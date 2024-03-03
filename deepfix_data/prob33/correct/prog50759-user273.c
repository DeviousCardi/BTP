#include <stdio.h>
int main() {
    int h;
    int hf;
    int hi;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i;
    int flag=0;
    for(i=1;i<=p;i++) {
        scanf("%d%d",&hi,&hf);
        if(hf<hi) {
          h=h+hf-hi;
          flag=1; }
        else {
            continue; } }
    if(flag==1) {
        if(h>0) {
        printf("Yes"); } }
    else {
        if(h==0)
        {printf("No");} }
    return 0; }