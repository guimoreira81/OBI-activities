
/*
Rodano o código localmente:
Criar um arquivo input.txt no mesmo diretório do script, contendo o texto da entrada, cada item separado por 1 espaço
Executar no terminal: node script.js < input.txt > output.txt
A saída estará em output.txt

ou
node script.js < input.txt
A saída estará no terminal
*/

// Exemplo de uso da entrada e saída
const fs = require("fs");
const input = fs.readFileSync(0, "utf-8").trim().split(/\s+/);

const a = Number(input[0]);
const b = Number(input[1]);

console.log(a+b);

/*
ATENÇÃO

* Sempre converter os dados da enrtrada para o tipo de dado desejado
Exemplo: é esperado receber um número, converta a string da entrada para número
Number(input[0]);

* Estar atento aos limites dos testes de entrada
Se a questão mostrar: Saída é N (Número Natural), sendo N 5 <= N >= 100
Fazer com que o programa se interrompa caso a entrada não seja a esperada com
process.exit();
*/
