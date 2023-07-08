#include <stdio.h>
#include<string.h>

typedef struct livro{
    char titulo[30];
    char autor[15];
    char data[8];
}livros;
void pesquisaLivro(livros livros [3], char busca[30]){
 int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        
       if (strcmp(livros[i].titulo, busca)==0)
       {
        temp++;
        printf("Segue Livros encontrados:\n");
        printf("Titulo:%s\n",livros[i].titulo);
        printf("Autor: %s\n",livros[i].autor);
        printf("Data:%s\n",livros[i].data);
       }
       
    }
    
    if (temp == 0)
    {
        printf("nenhum livro encontrado'%s'",busca);
    }
    
}

int main()
{
     livros livros[3];
    char titulobusca[30];

    strcpy(livros[0].titulo, "E assim que acaba");
     strcpy(livros[0].autor, "Colleen Hoover");
      strcpy(livros[0].data, "2016");

    strcpy(livros[1].titulo, "Mais esperto que o diabo");
     strcpy(livros[1].autor, "Napoleon Hill");
      strcpy(livros[1].data, "2011");
    
    strcpy(livros[2].titulo, "Onde estao as flores?");
     strcpy(livros[2].autor, "Ilko Minev");
      strcpy(livros[2].data, "2014");
    
  
     printf("Informe o titulo do livro desejado: ");
  fgets(titulobusca,sizeof(titulobusca), stdin);
   titulobusca[strcspn(titulobusca, "\n")] = '\0';
     pesquisaLivro(livros, titulobusca);


    return 0;
}

