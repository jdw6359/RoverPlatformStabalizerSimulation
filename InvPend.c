#include <stdio.h>
#include <stdlib.h>

#include "InvPend.h"


void derivativeSystem(double t, double *x, double *u, double *dx){

	dx[0]=x[2];
	dx[1]=x[3];

	x3derivative(t,x,u,dx);

	x4derivative(t,x,u,dx);

}


void x3derivative(double t, double *x, double *u, double *dx){

	dx[2]=1.5;

}

void x4derivative(double t, double *x, double *u, double *dx){

	dx[3]=-5;

}

