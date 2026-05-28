def verificarInput():
    valor = input()
    if int(valor) and int(valor) >= 5 and int(valor) <= 100:
        return int(valor)
    else:
        quit()

a = verificarInput()
b = verificarInput()
c = verificarInput()

menor = 0
maior = 0
resultado = 0
if a==b and a==c:
    resultado = a

if a==b or a==c:
    resultado = a

if b==a or b==c:
    resultado = b

if c==a or c==b:
    resultado = c


if a>b and a>c:
    maior = a
if b>a and b>c:
    maior = b
if c>a and c>b:
    maior = c

if a<b and a<c:
    menor = a
if b<a and b<c:
    menor = b
if c<a and c<b:
    menor = c

if a!=menor and a != maior:
    resultado = a
if b!=menor and b != maior:
    resultado = b
if c!=menor and c != maior:
    resultado = c

print(resultado, end="")