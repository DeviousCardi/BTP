#include <stdio.h>
int main() {
    int h;
    scanf("%d",&h);
    int p,i,curr,prev;
    scanf("%d",&p);
    scanf("%d ",&prev);
    for(i=1;i<p;i++){
        scanf("%d ",&curr);
        if(prev>curr){
            h=h-(prev-curr); } }
    if(h>0){
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }