#include <stdio.h>
#include <stdlib.h>
int main() {
    int q,w,e,r;
    int i=0,j=0,v=0;
    int a1[20],a2[20],a3[20],a4[20];
    scanf("%d%d%d%d\n",&q,&w,&e,&r);
    for(i=0;i<q;i++) {
        scanf("%d\n",&a1[i]); }
    for(i=0;i<w;i++) {
        scanf("%d\n",&a2[i]); }
    for((i=0,j=0,v=0);i<q&&j<w) {
        if((a1[i]-e)<=a2[j]&&a2[j]<=(a1[i]+r)) {
            i++;
            j++;
            a3[v]=i;a4[v]=j;
            v++; }
        else if(a2[j]<a1[i]-e) {
            j++; }
        else
        i++; }
    printf("%d\n",v);
    for(i=0;i<v;i++) {
        printf("%d %d\n",a3[i],a4[i]); }
	return 0; }