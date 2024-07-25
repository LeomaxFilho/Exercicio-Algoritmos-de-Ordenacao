#include "Ins_sort.hpp"

vector<double> sort(vector<double> vetor){
    int count = size(vetor);
    double aux;

    for (int i = 1; i < count; i++)
    {
        int j = i - 1;
        aux = vetor[i];
        while ((aux < vetor[j]) && j >= 0)
        {
            vetor[j+1] = vetor[j];
            j --;
        }
        vetor[j+1] = aux;
    }
    return vetor;
}

void print(vector<double> vetor){

    int count = size(vetor);

    std::cout << "vector = {";
    for (int i = 0; i < count; i++)
    {
        std::cout << vetor[i];
        if(i+1 < count )
            std::cout << ",";
    }
    std::cout << "}" << std::endl;

}

vector<double> read_vetor(string name){
    vector<double> vetor;

    ifstream arq;
    arq.open(name);
    int i;
    if(!arq.is_open()){
        std::cout << "Error ao abrir o arquivo\n";
    }
    else{
        int tam;
        arq >> tam;

        for (int j = 0; j < tam-1; j++)
        {
            double aux;
            arq >> aux;
            vetor.push_back(aux);
        }
    }
    
    arq.close();
    return vetor;
}