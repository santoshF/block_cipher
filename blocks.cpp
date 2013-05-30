/*
 * =====================================================================================
 *
 *       Filename:  binary_block.cpp
 *
 *    Description:  to break binary file into blocks of sizes;
 *
 *        Version:  7.0
 *        Created:  Friday 10 May 2013 11:15:38  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes (P.F.), s.is.santosh@gmail.com
 *   Organization:  ISSC
 *
 * =====================================================================================
 */
#ifndef 	BLOCKS_H_
#define		BLOCKS_H_

#include	<iostream>
#include	<fstream>
#include	<stdlib.h>

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  break binary in file into blocks
Sample output
 length	16
 modulo	0
 diff	8

 * =====================================================================================
 */

	int
main ( int argc, char *argv[] )
{
	// Input File in binary mode
	ifstream fin("output.txt");
	//Output File in blocks.txt
	ofstream fout("blocks.txt");
        int numBits = 8;
        //Check conditions
         if(fin == NULL)
	 {
	  cerr<< " Cannot open  ";
	  exit(0);
	}
	//Seek pointer to the end
        fin.seekg(0, fin.end);
	//Count backwards
	int length = fin.tellg();
   	 cout << length <<endl;
            	
	//Seek to begining
        fin.seekg (0 , fin.beg);       
	//Create buffer
        char * buffer = new char [numBits]; 
	//counter
	int i =0;
	//End of File
        int check = length % numBits;
	 cout << check <<endl;
	int con = length / numBits;
         cout <<  numBits- check <<endl;	

       
	
           
        while(!fin.eof() &&  i < (con+check)) { 
        //Extract n from stream
	fin.readsome( buffer, numBits);
        i++;  
//        fout << " Blocks " <<  i  << "   " ;
            	
        fout.write(buffer,numBits ); 
	fout<<endl; 


               
       }
      	
	 
        
              	
	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

#endif
