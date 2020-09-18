#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	
	printf(0, "initial pid count: %d \n", getpidcount());

	printf(0, "calling pid count 3 times \n");
	
	int i;
	for( i = 0; i < 3; i++) {
		printf(0, "pid of process: %d \n", getpid());
	}
		
	printf(0, "current pid count: %d \n", getpidcount());
	
	printf(0, "calling pid count 2 more times \n");

	for(i = 0; i < 2; i++) {
		printf(0, "pid of process: %d \n", getpid());
	}

	printf(0, "current pid count: %d \n", getpidcount());
	
	exit();
}

