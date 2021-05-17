#include arvoreCovid.h

int escolha()
{
	int resposta = 0;
	exibirMenu();
	scanf("%d", &resposta);
	return resposta;
}

void menu()
{
	int opcao = 0;
	int voltar = 0;
	
	opcao = escolha();
	
	switch(opcao)
	{
		case 0:
			exibirSobrePrograma();
			break;
		case 1:
			exibirMenuConsulta();
			break;
		case 2:
			
		default:
	}
}

int main (void)
{
	int opcao = 0;
	return 0;
}
