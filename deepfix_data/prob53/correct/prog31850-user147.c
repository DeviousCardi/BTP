#include<stdio.h>
#define max 100000
long int n;
float a[max];
float arrdiff(float a[],float diff) {
    static int i=1;
    if(i<n) {
        diff-=a[i];
        i++;
        return arrdiff(a,diff); }
    else {
        return diff; } }
int main() {
    float diff;
    scanf("%ld\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%f ",&a[i]); }
    float k=a[0];
    diff=arrdiff(a,k);
    printf("%f",diff);
    return 0; }