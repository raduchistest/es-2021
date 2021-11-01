#include <iostream>
#include <omp.h>
using namespace std;

int main() {
	omp_set_num_threads(6);
	#pragma omp parallel for
	for (int i = 0; i < 10; i++)
		cout << "Hello #" << i << endl;
	return 0;
}
