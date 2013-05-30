/*
 * =====================================================================================
 *
 *       Filename:  block_cipher.cpp
 *
 *    Description:  to generate block cipher
 *
 *        Version:  1.0
 *        Created:  Friday 10 May 2013 10:51:48  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes (), s.is.santosh@gmail.com
 *   Organization:  ISSC
 *
 * =====================================================================================
 */




#include	"lib/binary.h"
#include	"lib/generate.h" 
#include	"lib/blocks.h"
//#include	"lib/encrypt.h"

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  input file
		  argv[1] = text file
		  argv[2] = encrypted file 	
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	if (argc != 3 ) {
	 cerr << " Format: ./out msg.txt encrypt.txt  " <<endl; 
	}
	else{
	 int key;
	 cout << " Enter the key ::  " <<endl;
	 cin >> key;
 
        //Produce the binary of the msg and store it in bin.txt	 
	binary(argv);

	//Generates the boolean expression of AND OR
	generate(key);
	
	//Break the binary into blocks
	// Take bin.txt file and generate  blocks in blocks.txt
	blocks();

	//Encrypt and save file
//	encrypt(argv[2]);

	}


	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
