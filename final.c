#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
	long int deadline;
	for(int i = 0;i < 10;i++){
		pid_t pid;
		if((pid = fork()) == 0){
			printf("dd");
			srand(time(NULL) - i*20);
			deadline = rand() % 100 + 20;
			printf("deadline shuru mei itni hai : %ld", deadline);
			char *str;
			sprintf(str, "%ld", deadline);
			execlp("./simple", "./simple", str, NULL);
		}
		else if(pid < 0){
			printf("fork error\n");
		}
		else{
			//printf("Parent prcoess\n");
		}
	}
	int status;
	for(int i = 0;i < 10;i++)
		wait(&status);
	return 0;
}
