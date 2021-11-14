#include <mpi.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

int world_size,world_rank;
MPI_Init(&argc,&argv);
MPI_Comm_size(MPI_COMM_WORLD, &world_size);
MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

cout<<"Hello World by "<< world_size<< ":" << world_rank<<endl;
MPI_Finalize();
}
