#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

double a;
int  main()
{
float t, t1;
double **u;

t = sqrt(2);
t1 = (4/pow(t,2))+pow(t,2)+4;
printf("The minimum value of t1 square is %lf\n",t1);

u = loadtxt("./data/u.dat",2,1);
printf("%lf\n",u[0][0]);

a = u[0][0]/2;
printf("%lf",a);
save_a();
}

void save_a(){
	FILE * fp;
	fp = fopen("./data/a.dat","w");
	fprintf(fp,"%lf",a);
	fclose(fp);
}
