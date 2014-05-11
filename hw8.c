/* Josh Woodward, HW7 for Applied Programming, 5-8-2014 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ODEsolvers.h"
#include "InvPend.h"

int main(int argc, char *argv[]){

	/* Check to make sure the proper number of args were provided */
	if(argc==8){

		/* Variable Declarations here */
		double step, maxTime, time;

		double startingVals[4];

		func4arg f=&derivativeSystem;

		step=strtod(argv[2],NULL);
		maxTime=strtod(argv[3],NULL);

		startingVals[0]=strtod(argv[4],NULL);
		startingVals[1]=strtod(argv[5],NULL);
		startingVals[2]=strtod(argv[6],NULL);
		startingVals[3]=strtod(argv[7],NULL);

		for(time=0;time<maxTime;time+=step){

			fprintf(stdout,"Value of time: %g\n",time);

			if((strcmp(argv[1], "eu"))==0){
				eu(4,0,startingVals,startingVals, step,f);
			}
			if((strcmp(argv[1], "rk2"))==0){

			}
			if((strcmp(argv[1], "rk3"))==0){

			}
			if((strcmp(argv[1], "rk4"))==0){

			}

		}

	}else{

		fprintf(stdout,"Usage: hw8 ODE h tf x1 x2 x3 x4\n");

	}
	/* End check for proper number of command line args */

	return 0;
	/* Return 0 to the OS */
}



