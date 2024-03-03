#include <stdio.h>
int main(){
    int k,n;
    int list[100];
    scanf("%d\n%d",&k,&n);
    for(int i =0; i<100; i++) {
        scanf("%d",&list[i]); }
    int j,a,result;
    for(j=0; j<100; j++) {
        for(a=0; a<100; a++) {
            if(a==j) {
                continue; }
            else {
                result = list[j] + list[a]; } } }
    if(result ==k) {
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }