#include <stdio.h>
void sort(long int num[],int n) {
    int i,j,min,temp;
    for(i=0;i<n-1;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(num[min]>num[j]) {
                min=j; } }
        temp=num[min];
        num[min]=num[i];
        num[i]=temp; } }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    long int ch[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%ld",&ch[i]);
    sort(ch,n);
    printf("%ld",ch[n-k]);
    return 0; }