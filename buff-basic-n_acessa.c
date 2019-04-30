#include <stdio.h>
#include <string.h>

int main (int argc, char*argv[])
{
	int naoacessa = 0; 
	char buff[8]
	
	strcpy(buff, argv[1]);
	
	if(naoacessa == 0 ){
			printf("Acesso Negado\n");
	}else{
			printf("Você conseguiu acessar\n");
	}
	return 0;
}