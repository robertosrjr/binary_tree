/*
 ============================================================================
 Name        : ArvoresBinarias.c
 Author      : Roberto S. Ramos Jr
 Version     : 1.0
 Copyright   : robertosrjr@gmail.com
 Description : Árvores Binárias in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define size 10
#define R -1 //Root
#define E 1 //Left
#define D 2 //Rigth


typedef struct str_no {

	char data;
	int left;
	int rigth;
	int father;
};

struct str_no tree[size];
int index = 0;


int seach_tree(char data) {

	if (index != 0) {

		int i;
		for (i = 0; i < index; i++) {

			if (tree[i].data == data) {

				return (i);
			}
		}
	} else {

		return (0);
	}
}

void insert_tree(int father, char data, int side) {

	switch (size) {
		case E:

			tree[father].left = index;
			tree[index].data = data;
			tree[index].father = father;
			tree[index].left = -1;
			tree[index].rigth = -1;
			index++;
			break;
		case D:

			tree[father].rigth = index;
			tree[index].data = data;
			tree[index].father = father;
			tree[index].left = -1;
			tree[index].rigth = -1;
			index++;
			break;
	}
}


int main(void) {
	puts("Algoritmos e Estrutura de Dados em C - Arvores Binárias"); /* prints Algoritmos e Estrutura de Dados em C - Arvores Binárias */
	return EXIT_SUCCESS;
}
