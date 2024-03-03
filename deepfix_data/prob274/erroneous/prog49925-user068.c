#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[100],k=0,c[100];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        b[k++]=i+1;
        b[k++]=a[i]; }
    for(i=1;i<k;i++) {
        if(b[i-1]==b[i]) {
            i++; }
        else {
        c[q]=b[i];
        q++ } }
    for(i=0;i<q;i++)
    printf("%d",c[q]);
    return 0; }