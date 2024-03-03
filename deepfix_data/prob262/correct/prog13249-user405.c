#include<stdio.h>
#include<strings.h>
#define max 1000000000
void rev(int s[], int n) {
    if(n<2)
    return;
    int *temp=malloc(sizeof(int));
    temp=s[0];
    s[0]=s[n-1];
    s[n-1]=temp;
    free(temp);
    rev(++s, n-2); }
int main() {
    int n, ar[1000];
    scanf("%d", &n);
    if(n>max)
        return -1;
    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]); }
    rev(ar, n);
    for(int i=0; i<n; i++) {
        printf("%d", ar[i]); }
    return 0; }