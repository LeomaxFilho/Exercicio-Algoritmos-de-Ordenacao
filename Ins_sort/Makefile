NUMBERS = 1 2 3 4

define TOOL
	./test/insertion_sort.out -p num.1000.$(1).in
endef

define TOOL_echo
	@ echo ' Executando para: num.1000.$(1).in '
endef

all: Ins_sort.o
	@echo 'Criando o "Ins_sort.o"...'
	@ g++ Ins_sort.o main.cpp -o insertion_sort.out

Ins_sort.o:
	@echo 'Compilando...'
	@ g++ -c Ins_sort.cpp

clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o

run_exibe_1000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.1000.$(VAR).in \n\n\n'; ./insertion_sort.out -p ../test/num.1000.$(VAR).in ;)

run_exibe_10000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.10000.$(VAR).in \n\n\n'; ./insertion_sort.out -p ../test/num.10000.$(VAR).in ;)

run_exibe_100000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.100000.$(VAR).in \n\n\n'; ./insertion_sort.out -p ../test/num.100000.$(VAR).in ;)


run_1000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.1000.$(VAR).in \n\n\n'; ./insertion_sort.out -pn ../test/num.1000.$(VAR).in ;)

run_10000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.10000.$(VAR).in \n\n\n'; ./insertion_sort.out -pn ../test/num.10000.$(VAR).in ;)

run_100000:
	$(foreach VAR,$(NUMBERS), echo '\n\n\n Executando para: num.100000.$(VAR).in \n\n\n'; ./insertion_sort.out -pn ../test/num.100000.$(VAR).in ;)