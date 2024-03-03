#include <stdio.h>
int main() {
	float xa,xc,xp,ya,yc,yp;
	scanf("%f %f",&xa,&ya);
	scanf("%f %f",&xc,&yc);
	scanf("%f %f",&xp,&yp);
	if ((((xa==xp)||(xc==xp))&&(((yc>=yp)&&(ya<=yp))||((ya>=yp)&&(yc<=yp))))||(((ya==yp)||(yc==yp))&&(((xc>=xp)&&(xa<=xp))||((xa>=xp)&&(xc<=xp)))))
	printf("Point is on the rectangle.");
	else if (((xa<xp) &&(xc>xp) && (ya<yp) && (yc>yp))||((xc<xp) &&(xa>xp) && (yc<yp) && (ya>yp)))
	printf("Point is inside the rectangle.");
	else
	printf("Point is outside the rectangle.");
	return 0; }