NUMBERS = 1 2 3 4

all: Sel_sort.o
	@echo 'Criando o "Sel_sort.o"...'
	@ g++ Sel_sort.o main.cpp -o selection_sort.out

Sel_sort.o:
	@echo 'Compilando...'
	@ g++ -c Sel_sort.cpp

clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o

run_exibe_1000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.1000.$(VAR).in \n\n\n'; ./selection_sort.out -p ../test/num.1000.$(VAR).in ;)

run_exibe_10000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.10000.$(VAR).in \n\n\n'; ./selection_sort.out -p ../test/num.10000.$(VAR).in ;)

run_exibe_100000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.100000.$(VAR).in \n\n\n'; ./selection_sort.out -p ../test/num.100000.$(VAR).in ;)


run_1000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.1000.$(VAR).in \n\n\n'; ./selection_sort.out -pn ../test/num.1000.$(VAR).in ;)

run_10000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.10000.$(VAR).in \n\n\n'; ./selection_sort.out -pn ../test/num.10000.$(VAR).in ;)

run_100000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.100000.$(VAR).in \n\n\n'; ./selection_sort.out -pn ../test/num.100000.$(VAR).in ;)