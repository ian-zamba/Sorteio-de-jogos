#include "funcoes.h"


int main(void) {

    //limpar tela
    system("cls");

    //deixar em portugues
    setlocale(LC_ALL, "Portuguese");

    //declaracao de variaveis
    char opcao;


    do{

        cout << "1 - Sortear jogo" << endl;
        cout << "2 - Cadastrar novo jogo" << endl;
        cout << "3 - Listar jogos" << endl;
        cout << "4 - Sair" << endl;
        do{
            opcao = getch();
        }while(opcao != '1' && opcao != '2' && opcao != '3' && opcao != '4');

        //switch case
        switch(opcao){
            case '1':
                Sorteio();
                break;
            case '2':
                Cadastro();
                break;
            case '3':
                Listagem();
                break;
            case '4':
                //limpar tela
                system("cls");                
                cout << "Saindo..." << endl;
                break;
            default:
                break;
        }

    }while(opcao != '4');

    return 0;
}


/*
                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/