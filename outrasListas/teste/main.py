pi = 3.14
raio = int(input("raio\n"))
altura = int(input("altura\n"))
while raio <= 0 or altura <= 0:
    print("nao pode ser negativo ou zero\n")
    raio = int(input("raio\n"))
    altura = int(input("altura\n"))
    break
volume = pi * (raio*raio) * altura
print(volume)