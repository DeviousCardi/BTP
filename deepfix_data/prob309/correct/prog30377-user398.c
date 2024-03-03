#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[2*n-1];
    char ch=getchar();
    for(int l=0;l<2*n-1;l++) {
        str[l]=ch;
        ch=getchar(); }
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%s ",str[i]);
        arr[i]=str[2*i]-'0';
        printf("%d ",arr[i]);}
    int arr1[n];
    int c1=0;
    int bool1=0;
    for(int j=0;j<n;j++) {
        int bool2=0;
        for(int k=0;k<c1;k++) {
            if(arr[j]==arr1[k]) {
                bool2=1;
                break; } }
        if(bool2==0) {
            int count=0;
            arr1[c1]=arr[j];
            c1++;
            for(int m=j+1;m<n;m++) {
                if(arr[m]==arr[j])
                    count++; }
            if(count!=arr[j]-1)
                bool1=1; } }
    if(bool1==0)
        printf("Yes");
    else
        printf("No");
    return 0; }