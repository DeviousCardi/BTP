#include <stdio.h>
int n,arr[1000];
int freq(int);
int main() {
    int i,res[1000],flag=1;
    scanf("%d",&n);
    scanf("%d",&arr[0]);
    for(i=1;i<n;i++)
        scanf(",%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    for(i=0;i<n;i++)
        res[i]=freq(arr[i]);
    for(i=0;i<n;i++) {
            if(res[i]!=arr[i]) {
                    flag=0;
                    break; } }
    if(flag)
        printf("Yes");
    else
        printf("No");
    return 0; }
int freq(int a) {
        int count=0,i;
        for(i=0;i<n;i++) {
                if(arr[i]==a)
                    count++; }
        return count; }