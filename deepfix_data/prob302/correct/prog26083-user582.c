#include <stdio.h>
int main() {
	float xa,xc,xp,ya,yc,yp;
	scanf("%f %f",&xa,&ya);
	scanf("%f %f",&xc,&yc);
	scanf("%f %f",&xp,&yp);
	if (((xa==xp)&&(yc>=yp))||((xc==xp)&&(ya<=yp))||((xa<=xp)&&(yc==yp))||((xc>=xp)&&(ya==yp))||((xc==xp)&&(ya>=yp))||((xa==xp)&&(yc<=yp))||((xc<=xp)&&(ya==yp))||((xa>=xp)&&(yc==yp)))
	printf("Point is on the rectangle.");
	else if (((xa<xp)&&(yc>yp))||((xc>xp)&&(ya<yp))||((xa>xp)&&(yc<yp))||((xc<xp)&&(ya>yp)))
	printf("Point is inside the rectangle.");
	else
	printf("Point is outside the rectangle.");
	return 0; }