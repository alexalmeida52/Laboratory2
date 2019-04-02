# Laboratorio2

## Autores

    Bruno Wagner
    José Alex

## Diretórios

	Laboratorio2/
			Questao1/
					bin/
					include/
					obj/
					src/

## Comandos para compilar e executar o código no terminal

    cd Questao1
    make
    ./main

## Roteiro de comandos para testar funcionalidades

	1) O programa permite criar uma empresa e contém uma classe que representa essa empresa, registrando seu nome, CNPJ e lista de funcionários [item b, c]
		3
		Mercado
		12323
		2
		1

	2) Contém uma classe que representa um funcionário, registrando seu nome, salário e data de admissão. O programa permite que se adicione funcionários (um por vez) a uma empresa e não permite adicionar um funcionário que já tenha sido anteriormente adicionado, sendo neste caso exibida uma mensagem de erro. [itens a, d]
		4
		Alex
		1200
		01 04 2019
		4
		Bruno
		1000
		15 02 2018
		4
		Alex
		1200
		01 04 2019


	3) O programa permite listar os dados de todos os funcionários de uma empresa, com sobrecarga do operador de inserção em stream (<<) [item e]
		1

	4) O programa permite que seja dado um aumento de X% a todos os funcionários de uma determinada empresa [item f]
		3
		50
		1

	5) O programa permite listar os dados de todos os funcionários de uma empresa em período de experiência, ou seja, contratados há menos de 90 dias considerando a data corrente [item g]
		2

	6) O programa permite listar a média de funcionários por empresa. O cálculo é realizado a partir de atributos estáticos das próprias classes (Empresa e Funcionário). [item h]
		0
		4

## Roteiro de comandos sem tópicos

		3
		Mercado
		12323
		2
		1
		4
		Alex
		1200
		01 04 2019
		4
		Bruno
		1000
		15 02 2018
		4
		Alex
		1200
		01 04 2019
		1
		3
		50
		1
		2
		0
		4