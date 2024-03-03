#include <stdio.h>
char spr_arry(int k[],int n) {
    int i,j,c=0,count=0;
    for (i=0;i<n;i++) {
        c=k[i];
        for(j=0;j<n;j++) {
            if (c==k[j]) {
                count+=1; } }
        if(count==c) {
            continue ; }
        else {
            return no; } }
    return yes; }
int main() {
    int n;
    char ch;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
        ch=spr_arry(arr,n);
    printf("%c",ch);
    return 0; }