#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <time.h>

unsigned seed = time(0);

//função de montagem de times
void make_teams(std::vector<std::string> list,int quantPeaple,int quantTeams){
    //organização de times
    std::vector<std::vector<std::string>> teams;
    std::sort(list.begin(),list.end());
    while(!list.empty()){
        srand(seed);
        int pos=rand()%list.size();
        for(int i=0;i<quantTeams;i++){
            if(teams[i].size()<quantPeaple){
                teams[i].push_back(list[pos]);
                std::vector<std::string>::iterator it;
                *it=list[pos];
                list.erase(it);
            }
        }
    }
}


int main(){
    //declaration of the variables;
    std::string arquive;
    std::string read;
    int teamsQ;
    int members;
    std::ifstream in;
    std::vector<std::string> list;

    //leitura de dados
    std::cout<<"Digite o nome do arquivo com os nomes: "<<std::endl;
    std::cin>>arquive;
    std::cout<<"Quantos times devem ser feitos?  [Digite um número inteiro]"<<std::endl;
    std::cin>>teamsQ;
    std::cout<<"Quantas pessoas tem em cada time? "<<std::endl;
    std::cin>>members;

    //opening the arquive;
    in.open(arquive);  
    while(!in.eof()){
        std::getline(in, read);
        list.push_back(read);
    }

    make_teams(list,members,teamsQ);
    //implementar casos especiais e condições de não preenchimento
    return 0;
}