#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
// Integer:
	printf("\n Short integer %u Bytes %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("\nun_signed Short integer %u Bytes 0 to %d",sizeof(unsigned short int),USHRT_MAX);
	printf("\n unsigned integer %u Bytes 0 to %u",sizeof(unsigned int),UINT_MAX);
	printf("\n  integer %u Bytes %d to %d",sizeof(int),INT_MIN,INT_MAX);
	printf("\n Long integer %u Bytes %ld to %ld",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("\n Un_sigined long integer %u Bytes 0 to %u",sizeof(unsigned long int),ULONG_MAX);
 /*Character:*/
	printf("\n Character %u Bytes %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("\n UnSigned_Character %u Bytes 0 to %d",sizeof(unsigned char),CHAR_MAX);
	//Float:
	printf("\n Float %u Bytes ",sizeof(float));
	printf("\n Double %u bytes ",sizeof(double));
	printf("\n long Double %u bytes ",sizeof(long double));
	return 0;
}
