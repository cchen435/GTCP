#include <stdio.h>
#include <mpi.h>
#ifdef __bgq__
#include <firmware/include/personality.h>
#include <spi/include/kernel/process.h>
#include <spi/include/kernel/location.h>
#endif				/* 

#ifndef __bgq__
// If not on BG/Q, just return MPI_COMM_WORLD
void get_2d_communicator(MPI_Comm * comm2d) 
{
	

#else				/* 




{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	{
		
		
		
		    // first do Y => AB
		    // sweep along diagonals until the coordinates match
		    if (nA >= nB) {
			
			Ploc = iA;
			
			Qloc = iB;
		
		
		else {
			
			Ploc = iB;
			
			Qloc = iA;
		
	
	
	else
		
		
		Ysize = nA * nE;
		
		    // first do Y 
		    // sweep along diagonals until the coordinates match
		    if (nA >= nE) {
			
			Ploc = iA;
			
			Qloc = iE;
		
		
		else {
			
			Ploc = iE;
			
			Qloc = iA;
		
		
	
	
	
		
			
			
				pc = pc - Pdim;
			
			
				
				
			
			
			else
				displ++;
		
		
			break;
		
			
			
				pc = pc - Pdim;
			
			
				
				
			
			
			else
				displ++;
		
		
			break;
	
	
	
		
		
		    // next do X => CDE
		    // sweep along diagonals until the coordinates match
		    if (nD >= nE) {
			
			Ploc = iD;
			
			Qloc = iE;
		
		
		else {
			
			Ploc = iE;
			
			Qloc = iD;
		
		
	
	else
		
		
		    // next do X => BCD
		    // sweep along diagonals until the coordinates match
		    if (nC >= nD) {
			
			Ploc = iC;
			
			Qloc = iD;
		
		
		else {
			
			Ploc = iD;
			
			Qloc = iC;
		
		
	
	
	
		
			
			
				pc = pc - Pdim;
			
			
				
				
			
			
			else
				displ++;
		
		
			break;
		
			
			
				pc = pc - Pdim;
			
			
				
				
			
			
			else
				displ++;
		
		
			break;
	
	
		
		
		
	
	else
		
		
		
	
	    iE + iD * nE + iC * nD * nE + iB * nC * nD * nE +
	    iA * nB * nC * nD * nE;
	
	
	
	
	
		
		By = 8;
	
	
	else if (ranks_per_node == 32) {
		
		By = 4;
	
	
	else if (ranks_per_node == 16) {
		
		By = 4;
	
	
	else if (ranks_per_node == 8) {
		
		By = 4;
	
	
	else if (ranks_per_node == 4) {
		
		By = 2;
	
	
	else if (ranks_per_node == 2) {
		
		By = 1;
	
	
	else if (ranks_per_node == 1) {
		
		By = 1;
	
	
	    // use XY order for local and global cartesian ranks
//Ly = rank_in_node / Bx;
//Lx = rank_in_node - (Ly * Bx);
	    Lx = rank_in_node / By;
	
	
//px = Lx + Bx*Xcoord;
//py = Ly + By*Ycoord;
	    px = Xcoord + Lx * Xsize;
	
	
	
//key = py + px*(By*Ysize);
	    
	
	
		
		
		
	
	
//printf("rank with key %d has px = %d, py = %d\n", key, px, py);
	    
		printf
		    ("constructed a 2d communicator with logical dimensions <%d,%d>\n",
		     



{
	
	


 split_2d_communicator(MPI_Comm old_comm, MPI_Comm * new_comm) 
{
	
	
	
	    // stop splitting when there is just one node in the communicator
	    if (Xsize * Ysize == 1) {
		
		
	
	
	
	
	
		split_dimension = 'Y';
	
		
		
	
	
		
		
	
	



#endif				/* 