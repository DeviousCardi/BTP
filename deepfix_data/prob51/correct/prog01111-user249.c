#include <stdio.h>
void sort(long int num[],int n) {
    int i,j,min,temp;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i;j<n;j++) {
            if(num[min]>num[j]) {
                min=j; }
            temp=num[j];
            num[j]=num[i];
            num[i]=temp; } } }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    long int ch[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%ld",&ch[i]);
    sort(ch,n);
    for(i=0;i<n;i++)
        printf("%ld ",ch[i]);
    return 0; }