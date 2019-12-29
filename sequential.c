#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Write the sequential version, in C to simulate an Ising model of size nxn for k iterations, staring from a uniform random
initial state. The size n and number of iterations k are given. Make sure to avoid if statements for the boundaries. Use
two arrays, read from one and write to the other, then swap the pointers for the next iteration.*/

// Ising model evolution
/*!
  \param G      Spins on the square lattice             [n-by-n]
  \param w      Weight matrix                           [5-by-5]
  \param k      Number of iterations                    [scalar]
  \param n      Number of lattice points per dim        [scalar]
  
  NOTE: Both matrices G and w are stored in row-major format.
*/
void ising( int *G, double *w, int k, int n){
}
//Matrix size 517x517 
//Weights array
    double weights[] = {0.004, 0.016, 0.026, 0.016, 0.004,
    	0.016, 0.071, 0.117, 0.071, 0.016,
			0.026, 0.117, 0, 0.117, 0.026,
			0.016, 0.071, 0.117, 0.071, 0.016,
			0.004, 0.016, 0.026, 0.016, 0.004};
