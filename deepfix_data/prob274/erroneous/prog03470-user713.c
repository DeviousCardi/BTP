#include <stdio.h>
int  next_room(int b) {
    int r;
    r=a[b];
    return (r); }
int main(){
    int n,b,c=0,i,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
        b=a[i];
        a[i]=next_room(b); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            c++;
            if(a[i]==a[j])
            goto output; } }
    output:
    printf("%d",c);
    return 0; }