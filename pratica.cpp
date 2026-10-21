#include <iostream>
#include <string>
#include <limits>
#define MAX 10
using namespace std;
include <vector>;

//Definir a struct do curso

struct Curso {
    int codigo;
    string nome;
    int carga;
    int vagas;
};

//Definir a struct dos alunos
struct Aluno {
    int matricula;
    string nome;
    int idade;
    int codigoCurso;
};


// Procedimento para exibir um menu de opçoes
void mostrarMenu(){
    cout << "**************MENU*************\n";
    cout << "1 - para cadastrar curso. \n";
    cout << "2 - para mostrar os cursos cadastrados.\n";
    cout << "3 - para cadastrar aluno. \n";
    cout << "4 - para mostrar os alunos cadastrados.\n";
    cout << "5 - para buscar alunos por curso \n";
    cout << "6 - para mostrar o relatorio geral.\n";
    cout << "*******************************\n";
    cout << "Digite sua opcao: \n";
}

//Procedimento para cadastrar um novo curso
void cadastrarCurso(Cursos curso[], int &qtdCursos){
    cout << "Digite o codigo do curso:  \n";
    cin >> Cursos[qtdCursos].curso;

    cout << "Digite o nome do curso:    \n";
    cin.ignore(); //Descarta o enter do teclado
    getline(cin, cursos[qtdCursos].curso); //ele lê o nome inteiro com espaços, até encontrar com um enter e ai ele manda para a string.
   

    cout << "Digite a carga horária do curso:   \n";
    cin << curso.[qtdCursos].cargaHoraria;



 }




int main(){
    //Declarar os vetores
    Cursos curso[MAX];
    Alunos aluno[MAX];

    //Contadores
    int qtdCursos = 0;
    int qtdtAlunos = 0;
    int opcao;

    while(true){
        mostrarMenu();
        cin >> opcao;

        if(opcao == 0)
            break;
        switch (opcao){
            case 1:
                cadastrarFuncionario(listaFuncionario, &contFuncionarios);
                break;
            case 2:
                mostrarFuncionarios(listaFuncionario, contFuncionarios);
                break;
            case 3:
                cadastrarTipoProduto(listaTipoProduto, &contTipos);
                break;
            case 4:
                mostrarTiposProduto(listaTipoProduto, contTipos);
                break;
            case 5:
                cadastrarProduto(listaProduto, &contProdutos, listaTipoProduto, contTipos);
                break;
            case 6:
                mostrarProdutos(listaProduto, contProdutos, listaTipoProduto, contTipos);
                break;
            default:
                cout <<"opcao invalida. Digite novamente. \n";
                break;
        }
    }

    return 0;
}
