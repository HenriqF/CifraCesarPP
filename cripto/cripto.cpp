#include <bits/stdc++.h>
using namespace std;

int main(){
    int key;
    std::cout << "Chave: ";
    std::cin >> key;

    int abskey = abs(key); // essa linha de código usa da funcao abs() para poder transformar a variavel inteira key em seu valor absoluto. A funcao abs() recebe um numero inteiro e retorna o valor desse numero sem considerar seu sinal, ou seja, se o numero for negativo, ele será transformado em positivo. Nomeei-a abskey pelo motivo não intuitivo de ser equivalente a abs(key) (ou seja, juntei abs com key para nomea-la, de forma a refletir que ela contém o valor absoluto de key).
    std::string transformed;
    std::ifstream fr("texto.txt");
    if (!fr){
        std::cerr << "Falhou em achar saporra ae.\n";
        return 1;
    }
    std::string message;
    while(std::getline(fr, message)){
        std::string answer;
        int count = 0;
        for (int i = 0; i < message.length(); i++){
            int x = message.at(i);
            if (key>0){
                char ch = static_cast<char>(x+(abskey-count));
                if ((x+(abskey-count)) > 255){
                    std::cerr << "vai dar merda essae\n.";
                    return 1;
                }
                answer += ch;
            }
            else{
                char ch = static_cast<char>(x-(abskey-count));
                answer += ch;
            }
            count++;
            if (count > abskey){
                count = 0;
            }
            
        }
        transformed += answer;
        transformed += "\n";
    }
    fr.close();
    std::ofstream fw("texto.txt");
    fw << transformed;
    fw.close();
    return 0;
}