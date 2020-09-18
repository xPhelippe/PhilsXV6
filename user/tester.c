// Do not modify this file. It will be replaced by the grading scripts
// when checking your project.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	printf(0, "Starting test for getpidcount \n");
	int rc = fork();
	
	if(rc == 0) {
		char* args[] = {"getpidcounttest", NULL};
		exec(args[0], args);
	} else {
		wait();
		printf(0, "getpidcount test finished \n");
	}
	exit();
}
