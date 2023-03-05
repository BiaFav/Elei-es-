#include <stdio.h>

int main() {
    char voto; //variavel de 1byte
    int candidato = 0; 
    int candidatoA = 0;
    int candidatoB = 0; 
    int candidatoC = 0; 
    int candidatoD = 0; 
    int nuloE = 0; 
    int brancoF = 0; //variaveis de numeros inteiros
    float tA, tB, tC, tD, tE, tF; //porcentagem nem sempre são números inteiros, contendo números decimais, são as variaveis das porcentagens de cada candidato

  do{ 
    printf("\tOla! Sejam bem-vindos(as) a Eleicao de 2022.2");  
    printf("\tEscolha o seu candidato com cuidado! Após a escolha pressione enter\nCandidato [1]\t \nCandidato [2]\t \nCandidato [3]\t \nCandidato [4]\t \nNulo [5]\t \nBranco [6]\t \nResultado das eleicoes [7]\t");  
    
    scanf("%c", &voto);  
    getchar(); //retorna para votação indefinidas vezes
    if (voto == '1'){     
      candidato++; 
      candidatoA++;
      tA = (100 / candidato) * candidatoA; //contabilizando o primeiro voto em porcentagem
      printf("Voce votou para o Candidato A\n");
      
    }else if ( voto == '2'){
      candidato++;
      candidatoB++;
      tB = (100 / candidato) * candidatoB;
      printf("Voce votou para o Candidato B\n");
      
    }else if ( voto == '3'){
      candidato++;
      candidatoC++;
      tC = (100 / candidato) * candidatoC;
      printf("Voce votou para o Candidato C\n");

    }else if ( voto == '4'){
      candidato++;
      candidatoD++;
      tD = (100 / candidato) * candidatoD;
      printf("Voce votou para o Candidato D\n");

    }else if ( voto == '5'){
      candidato++;
      nuloE++;
      tE = (100 / candidato) * nuloE;
      printf("Voce votou  Nulo\n");

    }else if ( voto == '6'){
      candidato++;
      brancoF++;
      tF = (100 / candidato) * brancoF;
      printf("Voce votou Branco\n");

    }else if (voto == '7'){
      tA = (100/candidato)*candidatoA; tB = (100/candidato)*candidatoB; tC = (100/candidato)*candidatoC; tD = (100/candidato)*candidatoD; tE = (100/candidato)*nuloE; tF = (100/candidato)*brancoF; //definindo todas as porcentagens de cada candidato no resultado
      printf("1:%.1f %%\n2:%.1f %%\n3:%.1f %%\n4:%.1f %%\n5:%.1f %%\n6:%.1f %%  " , tA, tB, tC, tD, tE, tF );
    }else{
      printf("OPCAO INVALIDA!"); //a utilização do if else, caso contrário dos números de cada candidato, a opção é invalida
      
  }
  getchar();  
    }while (voto !='7'); //utilizacao do do-while 


     return 0;
}