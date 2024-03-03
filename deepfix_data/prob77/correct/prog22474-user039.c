#include <stdio.h>
int main() {
    int i,j,k,a;
    scanf("%d\n",&a);
    int num[a];
    for(i=0;i<a;i=i+1) {
    scanf("%d",&num[a]); }
    int max=num[0];
    int min=num[0];
    for(j=0;j<a;j++) {
    if(max>num[j])
    max=num[j]; }
    for(k=0;k<a;k++) {
    if(min<num[i])
    min=num[k]; }
    num[j]=min;
    num[k]=max;
    for(i=0;i<a;i=i+1) {
    printf("%d",&num[a]); }
    printf("end");
    return 0; }