#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main-random number is positive, negative or zero
  *
  *Return:0
  */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf("%d is positive´\n",n);
	}else if (n<0){
		printf("%d is negative\n",n);
	}
	else{
		printf("is zero\n");
	}
	return (0);
}
