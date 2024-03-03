#include <stdio.h>
int n;
int occ(int, int []);
int main() {
    int i=0,ch,flag;
    scanf("%d",&n);
    int arr[n];
    ch=getchar();
    printf("%c",ch);
    while((ch=getchar())!=EOF) {
        printf("%c",ch);
        if(ch!=',') {
            arr[i]=ch-'0';
            i++; } }
    for(i=0;i<n;i++) {
        flag=occ(arr[i],arr);
        if(flag==-1) {
            printf("No");
            break; } }
    if(flag==1)
        printf("Yes");
    return 0; }
int occ(int x,int ar[]) {
    int n,i,c=0;
    for(i=0;i<n;i++) {
        if(ar[i]==x)
            c++; }
    if(c==x)
        return 1;
    return -1; }