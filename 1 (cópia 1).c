#include <stdio.h>

int main()
{
  // criando a variável ponteiro para o arquivo
  FILE *orig,*saida;

  int linha_atual = 0, linha_selecionada = 0;
  char texto[10] = "";
  
  //abrindo o arquivo
  orig = fopen("original.txt", "r");
  saida = fopen("saida.txt", "w");

scanf("%d",&linha_selecionada);


   while(fgets(texto, 100, orig) != NULL){
        if(linha_atual != (linha_selecionada)){
            fputs(texto, saida);
              linha_atual += 1;
        }
        
        
}
  
  // fechando arquivo
  fclose(orig);
  fclose(saida);
  
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!\n");

printf("linha_atual: %d\n",linha_atual);
printf("linha_selecionada: %d\n",linha_selecionada);
  

  return(0);
}