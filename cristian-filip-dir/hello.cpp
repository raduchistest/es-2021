#include <iostream>
#include <omp.h>
using namespace std;

int main(){
	#pragma omp parallel num_threads(6)
	{
		int ID = omp_get_thread_num();
		cout << "Hello world from thread " << ID << "!\n";
	}
}
