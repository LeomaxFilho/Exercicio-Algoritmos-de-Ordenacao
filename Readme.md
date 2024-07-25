# Exercício Algoritmos de Ordenação

<details><summary> <strong>Sumário</strong></summary>

* [Insertion Sort](https://github.com/LeomaxFilho/Exercicio-Algoritmos-de-Ordenacao/tree/main?tab=readme-ov-file#insertion-sort)

* [Selection Sort](https://github.com/LeomaxFilho/Exercicio-Algoritmos-de-Ordenacao/edit/main/Readme.md#selection-sort)
</details>

# Insertion Sort
## Algoritimo
  Para esse algoritimo é visto principalmente a substituição dos valores enquanto o vetor é ordenado, sempre que é identificado no vetor um valor superior ao seu anterior é feita a substituição do valor para a posição intermediária entre os valores devidos: **menor que <** valor **< maior que**.
  
A imagem mostra o processo do algoritimo:

![Imagem1](/Ins_sort/How_It_Works.png)

### Compile and Run
Requires [make](https://www.gnu.org/software/make/)
Inside the path
```console
foo@bar:~$ make
```
Limpe os arquivos desnecessários
```console
foo@bar:~$ make clean
```
Caso queira ver os resultados dos vetores ordenados
```console
foo@bar:~$ make run_exibe_$(number)
```
Caso não queira ver os resultados dos vetores ordenados
```console
foo@bar:~$ make run_$(number)
```
# Selection Sort
## Algoritimo
  O algoritimo usado teve por base a substituição dos valores assim que eles fosse identificados como menores que o outro, assim como mostra a ideia da figura abaixo:
  
A imagem mostra o processo do algoritimo:

![Imagem1](/Sel_sort/How_It_Works.png)

### Compile and Run
Requires [make](https://www.gnu.org/software/make/)
Inside the path
```console
foo@bar:~$ make
```
Limpe os arquivos desnecessários
```console
foo@bar:~$ make clean
```
Caso queira ver os resultados dos vetores ordenados
```console
foo@bar:~$ make run_exibe_$(number)
```
Caso não queira ver os resultados dos vetores ordenados
```console
foo@bar:~$ make run_$(number)
```
