
maximo = 0
i = 0
j = 0

for i in range(1000):
    for j in range(1000):
        aux = i*j
        if aux == int(str(aux)[::-1]):
            if aux > maximo:
                maximo = aux

print maximo
