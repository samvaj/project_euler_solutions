#include<math.h>
#include<stdio.h>

// Finding some pythogorgean triplet which the sum of each of the 3 is equal to 1000, and returning the product of the 3 numbers
// You don't need to be efficient as so much as start high

int questionNine() {
	int first, second, third;
	for (first = 470; first > 0; first --) {
		for (second = first-1; second > 0; second--) {
			third = 1000-(first+second);
			if ((second*second)+(third*third) == (first*first)) {
				return first*second*third;
			}
		}
	}
}


int main () {
	printf("The answer to q9 is %i\n", questionNine());
	return 0;
}
