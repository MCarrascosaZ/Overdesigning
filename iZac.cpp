#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	int halfSize, size;

	size = atoi(argv[1]);
	halfSize = size*0.5 + (size & 1);

	char matrix[size][size];


	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			matrix[i][j] = ' ';


	while(halfSize--){//n/2
		matrix[halfSize][halfSize] = matrix[halfSize][0] = matrix[0][halfSize] = matrix[size-halfSize-1][0] = matrix[0][size-halfSize-1] = 
		matrix[halfSize][size-1] = matrix[size-1][halfSize] = matrix[size-halfSize-1][size-1] = matrix[size-1][size-halfSize-1] = 
		matrix[halfSize][size-halfSize-1] = matrix[size-halfSize-1][halfSize] = matrix[size-halfSize-1][size-halfSize-1] = '#';
	}

	for(int i = 0; i < size; i++)//n
	{
		for(int j = 0; j < size; j++)//n
		{
			std::cout << matrix[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "El resultat en temps d'execució són: N/2 per tal de fer els càlculs de la matriu, i N^2 per tal d'imprimir la matriu." << std::endl;
}