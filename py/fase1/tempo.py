entrada = """
5
R 2
R 3
T 5
E 2
E 3
"""

lista = [x for x in entrada.split("\n") if x != ""]
lista = lista[1:]


registros = []
for x in lista:
    cortado = x.split(" ")
    registros.append([cortado[0], cortado[1]])



#amigos = [numero: [tempo, esperando], ...]
amigos = {}
ultimoAmigo = None
for registro in registros:
    if "R" == registro[0]:
        ultimoAmigo = str(registro[1])
        if not ultimoAmigo in amigos:
            amigos[ultimoAmigo] = [0, True]
        amigos[2] = True
    if "E" == registro[0]:
        ultimoAmigo = str(registro[1])
        if not ultimoAmigo in amigos:
            amigos[ultimoAmigo] = [0, False]
        amigos[2] = False
    if "T" == registro[0] and ultimoAmigo in amigos:
        for amigo in amigos:
            if amigo[1]:
                amigo[0] += int(registro[1])

print(amigos)