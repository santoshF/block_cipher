/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 29 May 2013 02:11:10  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes (), s.is.santosh@gmail.com
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include	<iostream>
#include	<stdlib.h>
using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	string s("hello");
	cout << "Size of Hello " << sizeof(s);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
