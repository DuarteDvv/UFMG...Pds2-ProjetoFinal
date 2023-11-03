#ifndef FUNCT_
#define FUNCT_

#include "Usuario.hpp"
#include <list>
#include <cctype>  
#include <string>
#include <algorithm>

//Essa função verifica se o nome do usuário é escrito com letras comuns, se sim, retorna true, se tiver número ou caractere especial, retorna false
bool verifica_nome(std::string &);

//Função para verificar se um usuário já está registrado na lista de usuários
bool existeUsuario( std::list<Usuario>&,const std::string&);

 //Função que vai verificar se o cpf é válido 
bool verifica_cpf(std::string &);
// Função que remove um usuario da lista
void removeUsuario(std::list<Usuario> &, const std::string &);

// Funçoes que definem o parametro que ordena em ordem crescente caso cpf ou alfabetica caso nome;
bool compN( Usuario&, Usuario&);
bool compC(Usuario&, Usuario&);


#endif