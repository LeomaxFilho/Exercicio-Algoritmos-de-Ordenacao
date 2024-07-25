#include "Ins_sort.hpp"

int main(int argc, char const *argv[])
{
    string name(argv[2]);

    vector<double> vetor = read_vetor(name);
    //print(vetor);

    vector<double> sorted = sort(vetor);
    if(strcmp("-p",argv[1]) == 0)
        print(sorted);
    
    return 0;
}