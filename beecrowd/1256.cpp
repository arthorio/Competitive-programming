#include <iostream>

using namespace std;

int main()
{
	int numero_testes, tamanho_tabela, qtde_numeros = 0;
	cin >> numero_testes;

	for(int i = 0; i < numero_testes; i++)
	{
		cin >> tamanho_tabela >> qtde_numeros;
		int vetor_hash[tamanho_tabela][qtde_numeros];	

		int aux = 0;

		//inicializando
		for(int q = 0; q < tamanho_tabela; q++)
		{
			for(int j = 0; j < qtde_numeros; j++) vetor_hash[q][j] = -1;
		}

		//fazendo hash
		for(int j = 0; j < qtde_numeros; j++)
		{
			cin >> aux;
			for(int k = 0; k < qtde_numeros; k++)
			{
				if(vetor_hash[aux % tamanho_tabela][k] == -1)
				{
					vetor_hash[aux % tamanho_tabela][k] = aux;
					break;
				}
			}

		}

		//printando
		for(int m = 0; m < tamanho_tabela; m++)
		{
			cout << m << " -> ";
			for(int j = 0; j < qtde_numeros; j++) 
			{
				if(vetor_hash[m][j] != -1) cout << vetor_hash[m][j] << " -> ";
				else break;
			}
			cout << "\\" << endl;
		}

		if (i != numero_testes-1) cout << endl;
	}

	return 0;
}
