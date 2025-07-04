#include "sequence.h"
#include <iostream>
using namespace std;

int threshold=4096;

int main(int argc, char ** argv) {
	if (argc == 1 or argc > 4) {
		std::cout << "Command error" << std::endl;
		exit(1);
	}
	long long n = atoi(argv[1]);
	long long * A = new long long[n];
	for (long long i = 0; i < n; i++) {
		A[i] = i;
	}
	sequence::inplace_scan(A, n);
	sequence::inplace_scan(A, n);
	sequence::inplace_scan(A, n);
	sequence::inplace_scan(A, n);

	delete[]A;
	return 0;
}