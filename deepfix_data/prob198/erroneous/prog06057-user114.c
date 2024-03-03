#include <stdio.h>
#include <stdlib.h>
int min(int a,int b) {
    if(a<b) return a;
    else return b; }
int main() {
    int n1;n2,z,count=0, h[20];
    scanf("%d",&n1);
    int s[n1];
    for(int i=0; i<n1; i++) {
        scanf("%d",&s[i]); }
    scanf("%d",&n2);
    int a[n2]
    for(int i=0; i<n2; i++) {
    scanf("%d",&a[i]); }
    for(int i=0;i<n1; i++) {
        z=0;
    for(int j=0; j<n2; j++) {
        if (s[i]==a[j]) z=1; }
    if (z==0) {
        h[count]=a[i];
        count++ } }
    if(count!=0)
   { int mi=h[0];
    for( int i=0;i<count; i++) {
        mi=min(mi,h[i]); }
    printf("%d",mi); }
    else printf("NO");
	return 0; }