
from os import system
while True:
    system("clear")
    nome = input("Digite o seu nome: ")
    if nome.lower().find("gui") != -1:
        print("Você é uma boa pessoa")
    else:
        print("Você não é uma boa pessoa")

    input()
    
