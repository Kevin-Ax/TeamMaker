#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

int main(){
    //declaration of the variables;
    std::string arquive;
    std::string read;
    int teams;
    std::ifstream in;
    std::vector<std::string> list;
    std::cout<<"Digite o nome do arquivo com os nomes: "<<std::endl;
    std::cin>>arquive;
    std::cout<<"Quantos times devem ser feitos?  [Digite um número inteiro]"<<std::endl;
    std::cin>>teams;

    //opening the arquive;
    in.open(arquive);  
    std::getline(in, read);
    list.push_back(read);



    return 0;
}