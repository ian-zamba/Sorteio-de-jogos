#include "bibliotecas.h"

//----------------------------------------------
void Sorteio();
//----------------------------------------------
void Cadastro();
//----------------------------------------------
void Listagem();


//----------------------------------------------
//função de sorteio
void Sorteio(){

    //limpar tela
    system("cls");

    //declaracao de variaveis
    Jogo jogo = {0, ""};
    int quantidade = 0;

    //abrir arquivo
    fstream arq("jogos.dat", ios::in);
    
        //verificar se o arquivo existe
        if(!arq.is_open()){
            cout << "Nenhum jogo cadastrado" << endl;
            return;
        }else{
            //contar quantos jogos tem no arquivo
            while(arq.read((char*)&jogo, sizeof(Jogo))){
                quantidade++;
            }
        }

    arq.close();

    //sortear um jogo
    int sorteado = rand() % quantidade + 1;

    //abrir arquivo
    fstream arq2("jogos.dat", ios::in);
    
        //ler o jogo sorteado
        while(arq2.read((char*)&jogo, sizeof(Jogo))){
            if(jogo.id == sorteado){
                cout << "Jogo sorteado: " << jogo.nome << endl;
            }
        }

    arq2.close();

}
//----------------------------------------------
//função de cadastro
void Cadastro(){

    //limpar tela
    system("cls");

    //declaracao de variaveis
    Jogo jogo = {0, ""};
    int quantidade = 0;

    //abrir arquivo
    fstream arq("jogos.dat", ios::in);
    
        //verificar se o arquivo existe
        
        //contar quantos jogos tem no arquivo
        while(arq.read((char*)&jogo, sizeof(Jogo))){
            quantidade++;
        }

    arq.close();

    jogo.id = quantidade + 1;

    //ler nome do jogo
    cout << "Digite o nome do jogo: ";
    cin.getline(jogo.nome, 50);

    //abrir arquivo
    fstream arq2 ("jogos.dat", ios::app);

        //escrever no arquivo
        arq2.write((char*)&jogo, sizeof(Jogo));
        
    arq2.close();

    //limpar tela
    system("cls");

    cout << "Jogo cadastrado com sucesso!" << endl;


}
//----------------------------------------------
//----------------------------------------------
//função de listagem
void Listagem(){

    //limpar tela
    system("cls");
    
    //declaracao de variaveis
    Jogo jogo = {0, ""};

    //abrir arquivo
    fstream arq("jogos.dat", ios::in);
        //checar se o arquivo existe
        if(!arq.is_open()){
            cout << "Nenhum jogo cadastrado" << endl;
            return;
        }else{
            cout << "Jogos cadastrados: " << endl;
            while(arq.read((char*)&jogo, sizeof(Jogo))){
                cout << jogo.id << " - " << jogo.nome << endl;
            }
            cout << endl;
        }

    arq.close();

}
//----------------------------------------------






