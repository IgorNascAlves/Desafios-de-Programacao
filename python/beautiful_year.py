ano_inicial = int(input())

prox_ano = (ano_inicial + 1)
while (4 != len(set(str(prox_ano)))):
    prox_ano += 1

print(prox_ano)