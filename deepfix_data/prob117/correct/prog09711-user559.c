#include <stdio.h>
#include <stdlib.h>
int main(){
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++){
        if(a[i]<0){
            printf("no\n"); }
        else {
            printf("yes\n"); } }
    return 0; }