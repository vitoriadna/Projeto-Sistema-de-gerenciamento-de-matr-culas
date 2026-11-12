#include <iostream>
#include <string>
#include <limits>
#define MAX 10
using namespace std;

//Definir a struct do curso
struct Curso {
    int codigoCurso;
    string nomeCurso;
    int cargaHoraria;
    int vagas;
};

struct Aluno {
    int matricula;
    string nomeAluno;
    int idade;
    int codigoCursoMatriculado;
};

void menu() {
    cout << "####### opção 1 - Cadastrar Curso ######## \n";
    cout << "####### opção 2 - Cadastrar Aluno ######## \n";
    cout << "####### opção 3 - Listar Cursos disponiveis ######## \n";
    cout << "####### opção 4 - Listar Alunos matriculados ######## \n"; 
    cout << "####### opção 5 - Buscar aluno por curso ######## \n";
    cout << "####### opção 6 - Emitir relatorio geral ######## \n";
    cout << "####### opção 7 - Sair ########" << endl;
}

void cadastrarCurso (Curso listaCursos[],int &qtdCursos ){
    cout << "Digite o codigo do curso" << endl;
    cin >> listaCursos[qtdCursos].codigoCurso; // le o codigo digitado e guarda em codigoCurso,que esta na posição qtdCursos.
    for(int i = 0; i < qtdCursos; i++){ //percorrer os cursos já cadatrados e conferir se o codigo digitado já existe.
        if(listaCursos[i].codigoCurso == listaCursos[qtdCursos].codigoCurso){ //Compara o meu codigo do curso que já foi cadastrado é igual ao que o usurio acabou de digitar na ultima posição de qtdCursos.
            cout << "Erro! Curso já cadastrado. " << endl;
            return;

        }
    }

    cout << "Digite o nome do curso" << endl;
    cin.ignore(); // Descarta o enter que sobrou depois do codigo do curso digitado pelo usuario.
    getline(cin,listaCursos[qtdCursos].nomeCurso); // le toda a conteudo digitado pelo usuario permitindo espaços, e para com um enter, guarando a informação em nomeCurso 

    cout << "Digite a carga horaria " << endl;
    cin >> listaCursos[qtdCursos].cargaHoraria;

    cout << "Digite a quantidade de vagas disponiveis para o curso" << endl;
    cin >> listaCursos[qtdCursos].vagas;

    qtdCursos++;  // aumenta o contador para o proximo curso ser guardado na posição seguinte, sendo possivel pois eu usei o & alterando na "Fonte".
} 

void cadastrarAluno ( Aluno ListaAlunos[],int &qtdAlunos){
    cout << "Digite a matricula do aluno  " << endl;
    cin >> listaAlunos[qtdAlunos].matricula; 

    cout << "Digite o nome do aluno" << endl;
    cin.ignore(); 
    getline(cin,listaAlunos[qtdAlunos].nomeAluno); 

    cout << "Digite a idade do aluno " << endl;
    cin >> listaAlunos[qtdAlunos].idade;

    cout << "Digite o codigo do curso do qual o aluno deseja se matricular" << endl;
    cin >> listaAlunos[qtdAlunos].codigoCursoMatriculado;

    for(int i = 0; i < qtdAlunos; i++){ 

    qtdAlunos++; 
}



int main(){
codigoCursoMatriculado
    Curso cursoDisponivel [ MAX ];
    int qtdCursos = 0;

    Aluno alunoMatriculado [ MAX ];
    int qtdAlunos = 0;


    int opcaoEscolhida = 1;


    while (opcaoEscolhida != 7)
    {
        menu();
        cout << "Digite a opcao desejada " << endl;
        cin >> opcaoEscolhida;

        switch (opcaoEscolhida)
        {
        case 1:
            cadastrarCurso(cursoDisponivel,qtdCursos);
            break;
        
        default:
        cout << "opcao invalida" << endl;
            break;
        }
    }
    

    return 0;
}
