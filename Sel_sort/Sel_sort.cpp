#include "Sel_sort.hpp"

vector<double> sort(vector<double> vetor){
    int count = size(vetor);
    
    for (int i = 0; i < count; i++)
    {
        int pos = i+1;
        int init = vetor[i];

        if(i+1 < count){
            for (int j = i+1; j < count; j++)
            {
                double lowest = vetor[pos];

                if(vetor[j] < lowest){
                    pos = j;
                }
            }
        }

        if((vetor[pos] < vetor[i]) & (pos < count)){

            vetor[i] = vetor[pos];
            vetor[pos] = init;
        }

        if((vetor[pos] < vetor[i]) & (pos < count)){
            vetor[count-1] = vetor[i];
        }
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