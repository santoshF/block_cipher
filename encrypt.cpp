/*
 * =====================================================================================
 *
 *       Filename:  encrypt.cpp
 *
 *    Description:  to encrypt text
 *
 *        Version:  1.0
 *        Created:  Monday 27 May 2013 11:51:42  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Santosh Fernandes (), s.is.santosh@gmail.com
 *   Organization:  ISSC
 *
 * =====================================================================================
 */

#include	<fstream>
#include	<iostream>
#include	<stdlib.h>

using namespace std;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
void formulate(string );
void xormethod(char , unsigned int ,string ,unsigned int);
int fun(string,int);

	int
main ( int argc, char *argv[] )
{
	string  buff;
	// Binary Blocks
	ifstream fin("blocks.txt");
	while(!fin.eof()){
	 while(getline(fin,buff)) {
	 cout << buff << endl;     
	// send line to fun
	   formulate(buff);
 	 cout << endl;	
	}

	}
	fin.close();
		



	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */




void  formulate(string buff){
	
//	cout << buff ;
	unsigned int  len =  buff.length(); 
//	for (unsigned int i = 0 ; i < len; i++)	
//	xormethod(buff[i],len ,buff ,i);
	
	ifstream fin1("generate.txt");
	
	while(!fin1.eof()) {
	
	while( getline(fin1 ,s )) {
	
	   cout << s<<endl;

	return ;
}

void xormethod( char  a , unsigned int l ,string buff ,unsigned int i) {
 
	 cout << endl;
//	while(l != 0 ) {
	cout << "First char " <<a << endl;
//	 l--;  
//	}
	a =  a ^ fun( buff,i) ;
	cout <<  "buffer  " << buff << endl; 	
	
	cout << i << endl;
}

int fun(string buff,int pos) {

 cout << " Func " << endl;
	//ifstream fin1("generate.txt");
//	string op;
//	string op1;
//	bool ans;
	

	/*
	while(!fin1.eof()) {
	
	while( getline(fin1 ,s )) {
	
	   cout << s<<endl;

	}
	
	}*/
	cout << pos;



return 0;
}
