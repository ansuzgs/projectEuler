x = int(2)
numero = 600851475143
divisores = []

while numero != 1:
    if numero%x ==0:
        divisores.append(x)
        numero = numero/x
    else:
        x = x+1

print divisores[-1]
