#include <iostream>
#include <mpi.h>

int main(int argc, char ** argv[])
{
	int rank, size;
	rank = MPI:: COMM_WORLD.Get_rank();
	size = MPI:: COMM_WORLD.Get_size();
	std:: cout << "I am " << rank << " of " << size << " \n ";
	MPI::Finalize();
	return 0;
}
