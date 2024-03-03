#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,so,vst,ll,up,vss[232];
	int sos[123],ar1[121],ar2[121];
	scanf("%d %d %d %d",&so,&vst,&ll,&up);
	for(i=0;i<so;i++) {
	    scanf("%d",&sos[i]); }
	for(i=0;i<vst;i++) {
        scanf("%d",&vss[i]); }
    int count=0;
    int z=0;
    int k=0;
    for(i=0;i<so;i++) {
        for(j=k;j<vst;j++) {
            if((sos[i]>=vss[j]-ll)&&sos[i]<=vss[j]+up) {
                ar1[z]=i+1;
                ar2[k]=j+1;
                k++;
                count++;
                z++;
                break; } } }
    printf("%d\n",count);
    for(i=0;i<count;i++) {
        printf("%d %d\n",ar1[i],ar2[i]); }
	return 0; }