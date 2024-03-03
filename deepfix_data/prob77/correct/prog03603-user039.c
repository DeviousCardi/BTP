#include <stdio.h>
int main() {
    int i,j,k,l,a,b,c;
    scanf("%d",&a);
    int num[a];
    for(i=0;i<a;i=i+1) {
        scanf("%d",&num[i]); }
    for(l=0;l<a;l=l+1) {
    printf("%d ",num[l]); }
    int max=num[0];
    int min=num[0];
    for(j=0;j<a;j++) {
    if(num[j]>max) {
        b=j;
        max=num[j]; } }
    for(k=0;k<a;k++) {
    if(min<num[k]) {
        c=k;
        min=num[k]; } }
    int temp = num[b];
    num[b]=num[c];
    num[c]= temp;
    for(l=0;l<a;l=l+1) {
    printf("%d ",num[l]); }
    printf("end");
    return 0; }