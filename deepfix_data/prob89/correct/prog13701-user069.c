#include <stdio.h>
int main(){
    int k,n;
    int list[100];
    scanf("%d\n%d",&k,&n);
    for(int i =0; i<n; i++) {
        scanf("%d",&list[i]); }
    int j,a,result;
    for(j=0; j<n; j++) {
        for(a=0; a<n; a++) {
            if(a==j) {
                continue; }
            else {
                result = list[a] + list[j];
                if(result==k) {
                    break; } } } }
    if(result==k) {
        printf("lucky"); }
    else {
        printf("unlucky"); }
    return 0; }