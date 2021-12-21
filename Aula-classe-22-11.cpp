/*
Autor: Pablo T. Monteiro
Disciplina: Programacao e Estrutura de Dados II
Engenharia de Controle e Automacao
Tarefa Classes (prog. orientada a objetos)
*/
#include <iostream>
#include <string>

class Pessoa{
private:
    std::string nome;
    int age;
    float altura;
public:
    char sexo;
    void entraNome();
    void entraAge();
    void entraAltura();
    void entraSexo();
    void dados();
};

class Professor : public Pessoa{
private:
    std::string CPF;
public:
    int matricula;
    void entraCPF();
    void dadoCPF();
};

class Aluno : public Pessoa{
private:
    int ID;
public:
    int matricula;
    void entraID();
};
//------------main-----------
int main(){
    Professor prof;
    prof.entraNome();
    prof.entraCPF();
    prof.entraAge();
    prof.entraAltura();
    prof.entraSexo();
    prof.dados();
    prof.dadoCPF();
    return 0;
}
//---------------------------
void Pessoa::dados(){
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Idade: " << age << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
}
void Professor::dadoCPF(){
    std::cout << "CPF: " << CPF << std::endl;
}
void Professor::entraCPF(){
    std::cout << "Entre com o CPF: ";
    std::cin >> CPF;
}
void Pessoa::entraSexo(){
    std::cout << "Entre com o sexo (m ou f): ";
    std::cin >> sexo;
}
void Aluno::entraID(){
    std::cout << "Entre com o ID: ";
    std::cin >> ID;
}
void Pessoa::entraNome(){
    std::cout << "Entre com o nome: ";
    std::cin >> nome;
}
void Pessoa::entraAge(){
    std::cout << "Entre com a idade: ";
    std::cin >> age;
}
void Pessoa::entraAltura(){
    std::cout << "Entre com a altura: ";
    std::cin >> altura;
}
