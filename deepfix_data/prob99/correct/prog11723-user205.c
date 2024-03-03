#include<stdio.h>
#include<string.h>
int max=0;
void subseq(int a[], int n, char s[], int filled, int used) {
    if(used==n) {
         if(max<strlen(s))  max=strlen(s);
         return; }
    if(filled==0 || a[used]>(s[filled-1]-'0')) {
        printf("1. F=%d, U=%d, S=%s\n",filled,used,s);
        s[filled]='0'+a[used];
        printf("2. F=%d, U=%d, S=%s\n",filled,used,s);
        subseq(a,n,s,filled+1,used+1);
        s[filled]='\0';
        printf("3. F=%d, U=%d, S=%s\n",filled,used,s);
        subseq(a,n,s,filled,used+1);
        printf("4. F=%d, U=%d, S=%s\n",filled,used,s); } }
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    char sub[n+1];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sub[i]='\0'; }
    sub[n]='\0';
    subseq(a,n,sub,0,0);
    printf("%d", max);
    return 0; }