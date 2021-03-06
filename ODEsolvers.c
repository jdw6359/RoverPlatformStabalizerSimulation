#include <stdio.h>
#include <stdlib.h>

#include "ODEsolvers.h"





void eu(int neqn, double t0, double *x0, double *u0, double step, func4arg f){

	/* Declare derivative vector */
	double dx[4];

	/* Make call to derivativeSystem to solve for the deriv values */
	f(t0,x0,u0,dx);

	x0[0]=x0[0]+(step * dx[0]);
	x0[1]=x0[1]+(step * dx[1]);
	x0[2]=x0[2]+(step * dx[2]);
	x0[3]=x0[3]+(step * dx[3]);

}

void rk2(int neqn, double t0, double *x0, double *u0, double step, func4arg f){
	printf("rk2 called\n");
}

void rk3(int neqn, double t0, double *x0, double *u0, double step, func4arg f){
	printf("rk3 called\n");
}

void rk4(int neqn, double t0, double *x0, double *u0, double step, func4arg f){
	printf("rk4 called\n");
}

