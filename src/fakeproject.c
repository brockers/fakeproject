#include <config.h>
#include <stdio.h>
#include "fakeproject/fakeproject.h"

int
main (void) {
	puts ("Hello World!");
	// MYNAME is defined in your header located in the include/ directory
	//   as is math.h
	printf("Project %s is number %i\n", MYNAME, 2/2);
	return 0;
}

