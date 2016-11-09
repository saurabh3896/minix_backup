#include <mysyscallscheduling.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	mysyscall(atoi(argv[1]), getpid());
	int i, sum = 0;
	for(i = 0;i < INT_MAX/5;i++){
		sum += rand();
	}
	return 0;
}
