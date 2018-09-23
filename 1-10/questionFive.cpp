#include<math.h>
#include<stdio.h>

// Finding the smallest number that's evenly divisible from all numbers between 1 and 20
// The trick is realizing the only numbers not evenly divisible by 2520 (smallest number where all numbers evenly divisible by 1-10) are primes between 11 and 20, and 16 (so it also has to be multiplied by 2

int questionFive() {
	return 2520*11*13*17*19*2;
}


int main () {
	printf("The smallest number that's evenly divisible from all numbers between 1 and 20 is %i \n", questionFive());
	return 0;
}
