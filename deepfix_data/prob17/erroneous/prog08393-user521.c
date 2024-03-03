#include <stdio.h>
int main(){
    int n1,i;
    scanf("%d",&n1);
    int a[20];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int n2;
    scanf("%d",&n2);
    int s[20];
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    for(i=0;i<n2;i++) {
        for(j=i;j<n1;j++) {
            if(s[i]==a[j]) {
                i=i+1;
                count=count+1;
                continue; } } }
    if(count==n2) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }