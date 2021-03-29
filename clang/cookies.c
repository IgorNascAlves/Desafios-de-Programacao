// https://codeforces.com/problemset/problem/129/A
#include "stdio.h"

int main() {
	int quant;
	scanf("%d\n", &quant);

	int par=0, impar=0, temp, soma=0;

	for(int i = 0; i < quant; i++ ){
		scanf("%d", &temp);
		soma += temp;
		if (temp%2 == 0) {
			par++;
		} else {
			impar++;
		}
	}
	if (soma%2 == 0) {
		printf("%d", par);
	} else {
		printf("%d", impar);
	}
}
