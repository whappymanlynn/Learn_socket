/*******************************************************
 * the program main to show you the byteorder of your machine 
 * bigdian or littledian
 * 2017.11.5
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc , char ** argv)
{
	union{
		short   s;
		char c[sizeof(short)];
	}date;

	date.s = 0x0102;
	
	if(sizeof(short) ==2){
		if(date.c[0]==1&&date.c[1]==2)
			printf("big-endian\n");
		else if( date.c[0]==2 && date.c[1]==1)
			printf("little-endian\n");
	}
	else
		printf("sizeof(short)=%d\n",sizeof(short));
	

	/* Quit*/
	exit(0);

}
