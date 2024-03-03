#include <stdio.h>
int main() {
    int i,j,k,l,a,b,c;
    scanf("%d\n",&a);
    int num[a];
    for(i=0;i<a;i=i+1) {
        scanf("%d",&num[i]); }
    int max=num[0];
    int min=num[0];
    for(j=0;j<a;j++) {
    if(num[j]>max) {
        max=num[j];
    b=j; } }
    for(k=0;k<a;k++) {
    if(min<num[k]) {
        min=num[k];
    c=k; } }
    num[c]=min;
    num[b]=max;
    for(l=0;l<a;l=l+1) {
    printf("%d ",num[l]); }
    printf("end");
    return 0; }