#include arvoreCovid.h

void exibirMenuConsulta()
{
	printf("\n");
	printf("  +-----------------+\n");
	printf("  | Consultar dados |\n");
	printf("  +-----------------+---------------------------+\n");
	printf("  |  0 → Tabela Hash                            |\n");
	printf("  |  1 → Pesquisa Binária                       |\n");
	printf("  |  2 → Pesquisa Sequencial                    |\n");
	printf("  |  3 → Árvore de Pesquisa Binária             |\n");
	printf("  |  4 → Árvore de Pesquisa Binária Balanceada  |\n");
	printf("  +---------------------------------------------+\n");
	printf("\n");
}

void exibirSobrePrograma()
{
	printf("\n");
	printf("  +------------------+\n");
	printf("  | Sobre o programa |\n");
	printf("  +------------------+----------------+\n");
	printf("  | 'Consulta de dados' é um programa |\n");
	printf("  | desenvolvido com objetivo desta   |\n");
	printf("  | atividade prática é exercitar     |\n"); 
	printf("  | o uso de estrutura de dados para  |\n");
	printf("  | recuperar informações em memória  |\n");
	printf("  | principal. Além de auxiliar na    |\n");
	printf("  | análise da evolução e impacto da  |\n");
	printf("  | doença em nossa sociedade.        |\n");
	printf("  +-----------------------------------+\n");
	printf("\n");
}

void exibirDesenvolvedores()
{
	printf("\n");
	printf("  +-----------------+\n");
	printf("  | Desenvolvedores |\n");
	printf("  +-----------------+--------------+------------------------------------+\n");
	prtinf("  | Lincoln Corrêa Figueiredo Cruz | https://github.com/LincolnCFCruz   |\n");
	printf("  | Pedro Igor Martins dos Reis    | https://github.com/ORZAYAZ         |\n");
	printf("  | Rafael Brandão Nunes           | https://github.com/RafaelBrandao13 |\n");
	printf("  +--------------------------------+------------------------------------+\n");
	printf("\n");	
}

void exibirFim()
{
	printf("\n");
	printf("  +-----------------+\n");
	printf("  | Fim do programa |\n");
	printf("  +-----------------+\n");
	printf("\n");
}
void exibirMenu()
{
	printf("\n");
	printf("  +--------------------------------+\n");
	printf("  |  Consulta de dados - COVID-19  |\n");
	printf("  +--------------------------------+\n");
	printf("  |  0 → Sobre o programa          |\n");
	printf("  |  1 → Consultar dados           |\n");
	printf("  |  2 → Sair do programa          |\n");
	printf("  +--------------------------------+\n");
	printf("\n");
}

void pesquisaBinaria()
{
	int meio = 0;
	int direita = 0;
	int esquerda = 0;
	boolean resp = false;
	
	while(esquerda <= direita)
	{
		meio = (esquerda+direita)/2;
		if(x == vetor[meio])
		{
			resp = true;
			esquerda = n;
		}
		else if(x > vetor[meio])
		{
			esquerda = n+1;
		}
		else
		{
			direita = n-1;
		}
	}
}

void pesquisaSequencial()
{
	int i = 0;
	boolean resp =  false;
	
	for(i = 0; i < N; i++)
	{
		if(vetor[i] == x)
		{
			resp = true;
			i = n;
		}
	}
}

void arvoreBinaria()
{
	
}

void arvoreBalanceada()
{
	
}
