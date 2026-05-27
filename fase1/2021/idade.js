/*
Idade de Camila
https://olimpiada.ic.unicamp.br/pratique/p2/2021/f1/idade/
*/

const fs = require("fs");
const input = fs.readFileSync(0, "utf-8").trim().split(/\s+/);

const idades = [Number(input[0]), Number(input[1]), Number(input[2])];

// [index, valor]
let maiorIdade = undefined;
let menorIdade = undefined;

for (let i = 0; i<3; i++){
    let atual = [i, idades[i]];
    if (maiorIdade == undefined || atual[1] > maiorIdade[1]){
        maiorIdade = atual;
    }
    if (menorIdade == undefined || atual[1] < menorIdade[1]){
        menorIdade = atual;
    }
}

if (menorIdade[1] < 5 || maiorIdade[1] > 100){
    process.exit(0);
}

let resultado;
for (let i = 0; i<3; i++){
    if (i != maiorIdade[0] && i != menorIdade[0]){
        resultado = idades[i];
    }
}

console.log(resultado);