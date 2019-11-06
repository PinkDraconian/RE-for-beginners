#include <memory.h>
#include <stdio.h>

void swap_bytes (unsigned char* first, unsigned char* second)
{
	unsigned char tmp1;
	unsigned char tmp2;

	tmp1=*first;
	tmp2=*second;

	*first=tmp2;
	*second=tmp1;
};

int main()
{
	// copia la stringa nell' heap, così saremo in grado di modificarla
	char *s=strdup("string"); 

	// scambia il 2° e il 3° carattere
	swap_bytes (s+1, s+2);

	printf ("%s\n", s);
};

