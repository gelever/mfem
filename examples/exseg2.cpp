//                                MFEM Example Seg Fault
//
// Description:  This example code demonstrates a seg fault due to lack of
//		 copy constructor in DenseTensor.  Also segfault
//		 on copy DenseMatrix with size > 0 but null data.

#include "mfem.hpp"
#include <fstream>
#include <iostream>

using namespace std;
using namespace mfem;

int main(int argc, char *argv[])
{
	DenseTensor tensor(3, 3, 3);
	DenseTensor tensor2(tensor);

	//Seg fault on delete
}
