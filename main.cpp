//o curso ainda nem ensinou e o afobado aq já fez essa bosta kkkkkkkkkkkkkkkkkkk
#include <iostream>

int main(){
    int duvido_number;
    int bet_word;
    start:
    std::cout << "sei multiplicar qualquer numero por 8 em milesimos, duvida? (1 para sim e qualquer outra bosta para nao)";
    std::cin >> bet_word;
    if (bet_word == 1) {
        std::cout << "qual numero?";
        std::cin >> duvido_number;
            int resultado_number = duvido_number*8;
        std::cout << resultado_number << std::endl;
        std::cout << "agora c vai sentar " << resultado_number << " vezes. ";
        goto pergunta;
        return 0;
    }
            else{
                std::cout << "bom mesmo" << std::endl;
                goto pergunta;
            }
            //pergunta se quer sair
    pergunta:
    std::cout << "deseja sair?(mema merda do primeiro)";
    std::cin >> bet_word;
    if (bet_word == 1) {
        std::cout << "agr vai cum deus" << std::endl;
    }
        else{
            goto start;
        }
 return 0;
}