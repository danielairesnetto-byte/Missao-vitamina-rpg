#include <iostream>
#include <string>
using namespace std;

int main(void) {
    /* Daniel RPG´S works apresenta
    Código missão vitamina (RPG curto) */
    // Variaveis
    int menu_decision, second_decision, second_decision_case_2, second_decision_case_3, second_decision_case_2_case_0, second_decision_case_2_case_0_case_0, garbage, second_decision_case_2_case_0_case_0_if_1, second_decision_case_2_case_0_case_0_case_0, second_decision_case_0, second_decision_case_1, qtd_choose_times = 0;
    string first_decision;
    string second_decision_case_2_case_1, second_decision_case_2_case_1_if_1;
    // Definir valores iniciais
    string open = "Concluido"; string blocked = "Pendente";
    string secret = "|*| Conquista secreta |*|";
    string complete_all_the_game = "";
    string status_achiviement_fear = blocked;
    string status_achiviement_sad = blocked;
    string status_achiviement_boring = blocked;
    string status_achiviement_tetanus = blocked;
    string status_achiviement_fire = blocked;
    string status_achiviement_hospital = blocked;
    string status_achiviement_good = blocked;
    string status_achiviement_thunderstruck = blocked;
    string status_achiviement_bad_drink = blocked;
    string status_achiviement_cheese = blocked;
    string status_secret_achiviement_cheese = secret;
    string status_secret_achiviement_thunderstruck = secret;
    string status_secret_achiviement_bad_drink = secret;
    // Entrada do programa
    cout << "Daniel Aires Netto apresenta\n";
    cout << "MV --- Missão Vitamina (RPG curto)\n";
    
    for ( ; ; ) {
        // Menu
        cout << "\nDigite 0 para jogar\n";
        cout << "Digite 1 para verificar as conquistas\n";
        cout << "Digite 2 para resetar o jogo" << "     <-- Não perde o progresso\n";
        cout << "Digite 3 para fechar o programa" << "      <-- Perde o progresso\n";
        cin >> menu_decision;
        
        // Lógica de escolha do menu
        switch (menu_decision) {
        case 0:
            // Primeira tomada de decisão
            cout << "Você de repente sente uma vontade tremenda de tomar vitamina\n";
            cout << "Mesmo sabendo dos perigos, deseja proseguir[S/N]?\n";
            cin >> first_decision;
            cout << endl;
            if (first_decision == "S" || first_decision == "s") {
                // Segunda tomada de decisão
                cout << "Você decidiu prosseguir...\n"; 
                cout << "Foi para a cozinha, pegou o liquidificador, e percebeu algo\n";
                cout << "Sua voltagem era de 220V, e dentro de sua casa só havia 110V...\n";
                cout << "Essas são suas ideias, qual fazer?\n";
                cout << "Digite 0 para pegar o transformador 110V --> 220V na garagem\n";
                cout << "Digite 1 para procurar uma tomada 110V\n";
                cout << "Digite 2 para comprar um novo liquidificador\n";
                cout << "Digite 3 para usar a energia dos raios\n";
                /*Essa é a minha melhor vigarice, quem diria que uma palavra faltando no digite 3 causaria tanto impacto */
                cin >> second_decision;
                switch (second_decision) {
                case 0:
                    cout << "Você vai para a sua garagem pegar o seu transformador,\n";
                    cout << "porem, se depara com umas teias de aranha em cima dele e uma capa velha\n";
                    cout << "E agora, a escolha é sua!\n";
                    cout << "Digite 0 para tirar a capa com uma vassoura\n";
                    cout << "Digite 1 para tirar a capa com a mão\n";
                    cout << "Digite 2 para ligar para a sua mãe pedindo ajuda\n";
                    cout << "Digite 3 para usar um lança chamas\n";
                    cin >> second_decision_case_0;
                    switch (second_decision_case_0) {
                    case 0:
                        cout << "Você sente que está sendo observado, pega a vassoura a distancia\n";
                        cout << "e percebe a aranha monstruosa escondida do lado do seu transformador\n";
                        cout << "Você dá o seu jeito explusa ela de casa e seguro pega o transformador\n";
                        cout << "Finalmente vamos para o objetivo final a vitamina\n";
                        cout << "Você pega os ingredientes bate tudo com perfeição\n";
                        cout << "Coloca a sua bebida no copo, sacia a vontade e acaba com a história\n";
                        cout << "Parabens, você concluiu o seu objetivo!, fazer um vitamina.\n";
                        cout << "Eu sei foi simples, porem para quem acha que jogo acaba aqui está enganado...\n";
                        cout << "Objetivo concluido, vitamina na dose certa!\n";
                        if (status_achiviement_good != open) {
                            cout << "Conquista adquirida:\n" << "|*| Final bom |*|\n";
                            status_achiviement_good = open;
                        }
                    break;
                    case 1:
                        cout << "Você vai corajoso e tira a capa demonstrando ser dono dela\n";
                        cout << "Até que debaixo dela aparece uma aranha gigante!\n";
                        cout << "(que não é radioativa, desculpa fans de Peter Parker mais eu não quero processo da Marvel não).\n";
                        cout << "E é uma aranha armadeira armada para a sua direção!\n";
                        cout << "A iniciativa da aranha é maior que a sua, não deu nem tempoe ela te pica!\n";
                        cout << "E agora, o que fazer?\n";
                        cout << "Digite 0 para chamar uma ambulância\n";
                        cout << "Digite 1 para ir ao hospital a pé(estamos sem poupança lembra)\n";
                        cin >> second_decision_case_1;
                        if (second_decision_case_1 == 0) {
                            cout << "Você chama ambulancia e desmaia, quando acorda está tomando uma sopa\nNa ultima sala do hospital que supera 20 prédios juntos.\n";
                            cout << "Bom, não é vitamina porem pelo menos você está vivo\n";
                            cout << "Que sorte conseguir uma vaga hein?\n";
                            if (status_achiviement_hospital != open) {
                                cout << "Conquista adquirida:\n" << "|*| Aranha-Céu |*|\n";
                                status_achiviement_hospital = open;
                            }
                        } else if (second_decision_case_1 == 1) {
                            cout << "Economia em primeiro lugar gritava você enquanto mancava\n";
                            cout << "E quase desmaiava no meio da rua em plena madrugada, porem\n";
                            cout << "a sua morte foi dolorosa e rápida, os habitantes da cidade encontraram o seu cadaver\n";
                            cout << "na rua, ou seja, você MORREU...\n";
                            cout << "Deseja tentar novamente?\n";
                        } else {
                            cout << "Resposta incompreendida, vamos tentar novamente?\n";
                            cout << "Quer quebrar o meu código?, DESISTA!\n";
                            cout << "Joga direito, por favor ):\n";
                        }
                    break;
                    case 2:
                        cout << "Você acha mesmo que eu vou dar continuidade nisso aqui?\n";
                        cout << "Sua mãe tem muita mais coisa para fazer cara, vai trabalhar!\n";
                        cout << "E não não tem conquista aqui não podem ficar tranquilos platinadores\n";
                        cout << "Deseja tentar de novo?\n";
                    break;
                    case 3:
                        cout << "Você foi com lança chamas em tudo para cima do seu transformador emcapado,\no resultado mais que previsivel, CASA EM CHAMAS\n";
                        cout << "Você tenta abrir torneiras jogar água mais nada adianta\nOs bombeiros chegam e você já está no jornal\n";
                        cout << "Bom, pelo menos agora você é famoso\n";
                        if (status_achiviement_fire != open) {
                         cout << "Conquista adquirida:\n" << "|*| Celebridade de rua |*|\n";
                         status_achiviement_fire = open;
                        }
                    break;
                    }
                    break;
                case 1:
                    cout << "Você andou da sua casa e não achou a sua tomada, que triste perdeu o jogo tão cedo...\n";
                    cout << "Isso é 0.1% do jogo, tem MUITO mais a explorar!\n";
                    cout << "Deseja tentar novamente?\n";
                    break;
                case 2:
                    cout << "Você conferiu o seu saldo\n";
                    cout << "Percebeu que a sua conta bancária estava negativa\n";
                    cout << "E agora qual é a melhor saída?\n";
                    cout << "Digite 0 para vender o liquidificador antigo e rembolsar em um novo\n";
                    cout << "Digite 1 para usar o liquidificador de 220V no 110V\n";
                    cin >> second_decision_case_2;
                    switch (second_decision_case_2) {
                    case 0:
                        cout << "Você percebe que a melhor escolha é trocar por outro\n";
                        cout << "Coloca o seu a venda como usado pela metade do preço e vai comprar um novo\n";
                        cout << "Logo percebeste que estava de noite, e as lojas estavam fechadas\n";
                        cout << "E agora qual é a melhor saída?\n";
                        cout << "Digite 0 para comprar pela a internet\n";
                        cout << "Digite 1 para esperar o dia virar\n";
                        cin >> second_decision_case_2_case_0; 
                    switch (second_decision_case_2_case_0) {
                    case 0:
                        cout << "Comprar pela internet parece uma ótima escolha";
                        cout << "(lembra da palavra parece)\n";
                        cout << "E agora vamos lá onde comprar o seu produto?\n";
                        cout << "Digite 0 para comprar em um site de vendas\n";
                        cout << "Digite 1 para comprar um no barraco do zé ferro velho\n";
                        cin >> garbage;
                        cout << "Você acha que eu ia deixar você escolher essa?\n";
                        cout << "Você está sem dinheiro esqueceu? bora no barraco do Zé!\n";
                        cout << "Pegou o seu carro, dirigiu e chegou de frente com o Zé\n";
                        cout << "Vindo de uma família Italiana, chamavam-o de Zé ruela\n" ;
                        cout << "Você disse:\n";
                        cout << "Mestre das arruelas, como eu me livro da incontestavel vontade de tomar vitamina?\n";
                        cout << "Zé cospe um palito de dente, coça a cabeça com uma chave inglesa e diz:\n";
                        cout << "Vitamina? Na minha época isso se chamava falta de graxa no radiador!\n";
                        cout << "Se quer se livrar dessa vontade, só tem um jeito...\n";
                        cout << "Mais só se me ajudar com um projeto meu...\n";
                        cout << "Digite 0 para aceitar\n";
                        cout << "Digite 1 para questionar\n";
                        cout << "Digite 2 para recusar a proposta que nem foi dita\n";
                        cout << "Digite 3 para dar preferencia a vitamina\n";
                        cin >> second_decision_case_2_case_0_case_0;
                        switch (second_decision_case_2_case_0_case_0) {
                        case 0:
                            cout << "Você disse\n";
                            cout << "FECHADO!, o que eu tenho que fazer pelo senhor?";
                            cout << "Zé Ruela explode de felicide ao saber que finalmente ia realizar o seu sonho e disse:\n";
                            cout << "Esse é o cara que eu conheço, simbora, você vai me ajudar com o meu foguete, o meu sonho é ir a Lua!\n";
                            cout << "E agora qual é a resposta mais sábia, escolha:\n";
                            cout << "Digite 0 para dizer \"SIMBORA ZÈ RUELA\"\n";
                            cout << "Digite 1 para dizer \"Que bobagem, quem vai dirigir isso?\"\n";
                            cin >> second_decision_case_2_case_0_case_0_case_0;
                            switch (second_decision_case_2_case_0_case_0_case_0) {
                                case 0:
                                cout << "Zé Ruela abre um, sorriso explandecedor e disse:\n";
                                cout << "VAMOOOOOOS A LUA!\n";
                                cout << "Vocês trabalharam duro por vários dias, derrubaram gostas de suor\n usaram a sucata e fizem um trabalho que até um agente da Nasa teria inveja\n, tudo estava pronto, até que Zé Ruela disse:\n";
                                    cout << "Eu nem acredito que esse sonho vai se tornar realidade,\n muito obrigado jovem você é como um filho para mim,\n agora em sua posição!\n";
                                    cout << "Você engata as ultimas gotas de comustivel de foguete descartados direto da Nasa\n, agora é a hora, Zé Ruela se posiciona na cabine de comando,\n ele aperta um botão do seu velho tocador de fitas cassete que começa a tocar:\n";
                                    cout << "We're leavin' together\nBut still it's farewell\nAnd maybe we'll come back\nTo Earth, who can tell?\nI guess there is no one to blame\nWe're leaving ground (leaving ground)\nWill things ever be the same again?\nIt's the final countdown\n";
                                    cout << "3\n2\n1\nDECOLAR!\n";
                                    cout << "Não deu nem tempo do governo indentificar o foguete, vocês quebraram o limite da extratosfera\n";
                                    cout << "Vocês finalmentem alcançam a Lua\n, aterrisam sobre e ela e Zé Ruela já chega comendo 1/100 dá Lua e ele disse:\n";
                                    cout << "Finalmente, Finalmente posso saborear o melhor queijo do mundo, obrigado meu jovem\n";
                                    cout << "Bom, você perdeu a sua vontade de tomar vitamina,\n mais ganhou algo muito mais importante que isso.\n";
                                    if (status_achiviement_cheese != open) {
                                        cout << "Conquista SECRETA adquirida:\n" << "|*| The Final Countdown |*|\n";
                                        status_secret_achiviement_cheese = "|*| The Final Countdown |*|";
                                        status_achiviement_cheese = open;
                                    }
                                break;
                                case 1:
                                    cout << "Zé Ruela explode de raiva e grita:\n";
                                    cout << "BOBAGEM È A SUA VITAMINA!; VAZA DAQUI LEITE FERMENTADO!\n";
                                    cout << "Você humilhou o sonho de um homem e isso não se faz, agora você está sem vitamina\n";
                                    cout << "Vamos tentar novamente?\n";
                                    break;
                                default:
                                cout << "Resposta incompreendida, vamos tentar novamente?\n";
                                cout << "Quer quebrar o meu código?, DESISTA!\n";
                                cout << "Joga direito, por favor ):\n";
                                break;
                            }
                        break;
                        case 1:
                            cout << "Que projeto é esse? dependendo eu não faço\n";
                            cout << "Zé Ruela fica vermelho de raiva e explode falando:\n";
                            cout << "COMO ASSIM DEPENDENDO, VAZA DAQUI SEU FOLGADO, NUNCA MAIS FALA COMIGO VOCÊ TRAIU O CÒDIGO DE CONDUTA!, REGRA NUMERO 493, NUNCA QUESTIONAR O ZÈ, FORA!\n";
                             cout << "Você traiu o código de conduta do ferro velho e como consequencia agora você está sem vitamina\n";
                            cout << "Vamos tentar novamente?\n";
                        break;
                        case 2:
                            cout << "Como estava exatamente escrito você recusou a\n";
                            cout << "proposta e como consequencia agora você está sem vitamina\n";
                            cout << "Vamos tentar novamente?\n";
                        break;
                        case 3:
                            cout << "Você disse:\n";
                            cout << "Tá mais primeiro a minha vitamina!\n";
                            cout << "Zé abre um sorriso e diz\n";
                            cout << "Tá...você não vai se arrepender!\n";
                            cout << "Vai ter que bater uma vitamina de ferro fundido com parafuso solto!\n";
                            cout << "Ele te entrega um copo de liquidificador que parece um motor de fusca.\n";
                            cout << "Digite 0 para beber e provar a sua capacidade ao Zé (ou ao tétano)\n";
                            cout << "Digite 1 para recusar e levar uma arruelada na testa\n";
                            cin >> second_decision_case_2_case_0_case_0_if_1;
                            if (second_decision_case_2_case_0_case_0_if_1 == 0) {
                                cout << "Você fez as honras e colocou a boca naquela lata velha\n";
                                cout << "Pronto, você finalmente saciou a sua vontade, nem conversou mais com o Zé Ruela e foi para casa\n";
                                cout << "Os dias se passaram e estavam enterrando o seu caixão\n";
                                cout << "Morto você estava, satisfeito?\n";
                                cout << "Bom, pelo menos tomou a vitamina\n";
                                if (status_achiviement_tetanus != open) {
                                    cout << "Conquista adquirida:\n" << "|*| Tézétano |*|\n";
                                    status_achiviement_tetanus = open;
                                }
                            } else if (second_decision_case_2_case_0_case_0_if_1 == 1) {
                                cout << "Como estava exatamente escrito você recusou e\n";
                                cout << "levou uma aruelada na testa, agora você está sem vitamina\n";
                                cout << "Vamos tentar novamente?\n";
                            } else {
                                cout << "Resposta incompreendida, vamos tentar novamente?\n";
                                cout << "Quer quebrar o meu código?, DESISTA!\n";
                                cout << "Joga direito, por favor ):\n";
                            }
                        break;
                        default:
                        cout << "Resposta incompreendida, vamos tentar novamente?\n";
                        cout << "Quer quebrar o meu código?, DESISTA!\n";
                        cout << "Joga direito, por favor ):\n";
                        break;
                        }
                    break;
                    case 1:
                        cout << "Você foi para o seu quarto e dormiu\n";
                        cout << "Acordou com muita fome, tomou o seu café da manha e se preparou pois\n";
                        cout << "Depois de tanto tempo esperando virar o dia(de 20 de julho para 02 de agosto\n";
                        cout << "Perdeu completamente a vontade de tomar vitamina\n";
                        cout << "Bom, pelo menos economizou os seus ingredientes\n";
                        if (status_achiviement_boring != open) {
                            cout << "Conquista adquirida:\n" << "|*| Chato até no nome |*|\n";
                            status_achiviement_boring = open;
                        }
                        break;
                    default:
                    cout << "Resposta incompreendida, vamos tentar novamente?\n";
                    cout << "Quer quebrar o meu código?, DESISTA!\n";
                    cout << "Joga direito, por favor ):\n";
                    break;
                    }
                    break;
                    case 1:
                        cout << "Chega de enrrolação!, vamos preparar a vitamina!\n";
                        cout << "Todas as frutas foram cortadas e colocadas com leite\n";
                        cout << "dentro do liquitificador, basta bater\n";
                        cout << "Apertar o botão[S/N]?\n";
                        cin >> second_decision_case_2_case_1;
                        if (second_decision_case_2_case_1 == "S" || second_decision_case_2_case_1== "s") {
                            cout << "O liquidificador teve seu botão presionado!\n";
                            cout << "NÃO LIGA!, que tal passar um desigripante na hélice?\n";
                            cout << "FUNCIONOU!, BATENDO TUDO FINALMENTE, agora vamos tomar\n";
                            cout << "Deseja tomar?[S/N]\n";
                            cin >> second_decision_case_2_case_1_if_1;
                            if (second_decision_case_2_case_1_if_1 == "S" || second_decision_case_2_case_1_if_1 == "N" || second_decision_case_2_case_1_if_1 == "s" || second_decision_case_2_case_1_if_1 == "n") {
                                    cout << "Quer ver o inicio da história novamente?\n";
                                    cout << "Não tem como recusar o seu objetivo final, ou tem?\n";
                                    cout << "Bom, de qualquer forma você toma a vitamina\n";
                                    cout << "E é isso, voce concluiu o seu...\n";
                                    cout << "Você teve uma dor de barriga, e corre para o banheiro\n";
                                    cout << "Abrem o seu caixão e abrem o seu histórico de vida\n";
                                    cout << "Digitam a causa da sua morte\n";
                                    cout << "Desinteria por WD-40, VOCÊ ESTA DE BRINCADEIRA?\n";
                                    cout << "ISSO NÃO È UMA SIMPLES MULTIPLICAÇÃO; AQUI A ORDEM\n";
                                    cout << "DOS FATORES ALTERA SIM!\n";
                                    cout << "Mais pensa pelo lado positivo, você matou a vontade de tomar vitamina(literalmente)\n";
                                    cout << "Conquista SECRETA adquirida:\n" << "|*| Vitamina mecânica |*|\n";
                                    if (status_achiviement_bad_drink != open) {
                                        status_secret_achiviement_bad_drink = "|*| Vitamina mecânica |*|";
                                        status_achiviement_bad_drink = open;
                                    }
                            } else {
                                cout << "Resposta incompreendida, vamos tentar novamente?\n";
                                cout << "Quer quebrar o meu código?, DESISTA!\n";
                                cout << "Joga direito, por favor ):\n";
                                break;
                            }
                        } else if (second_decision_case_2_case_1 == "N" || second_decision_case_2_case_1 == "n") {
                            cout << "Por que? eu posso ser maligno na história mais o liquidificador não vai explodir não.\n";
                            cout << "Tente novamente (:\n";
                            break;
                        } else {
                            cout << "Resposta incompreendida, vamos tentar novamente?\n";
                            cout << "Quer quebrar o meu código?, DESISTA!\n";
                            cout << "Joga direito, por favor ):\n";
                            break;
                        }
                    break;
                    default:
                        cout << "Resposta incompreendida, vamos tentar novamente?\n";
                        cout << "Quer quebrar o meu código?, DESISTA!\n";
                        cout << "Joga direito, por favor ):\n";
                        break;
                    }
                    break;
                case 3:
                    qtd_choose_times += 1; // MINHA VIGARICE HAHAHAHAHAHA
                        if (qtd_choose_times == 2 ) { // Só uma vez a mais para não exagerar 
                            cout << "Você vai para a garagem pegar o seu para-raio\n";
                            cout << "Subiu a montanha mais alta que encontrou em volta da sua casa\n";
                            cout << "Posicionou o para raio e conectou o liquitificador ao para-raio\n";
                            cout << "O som dos anos 90 ecoa pela a mente...";
                            cout << "You've been....THUNDERSTRUCK";
                            cout << "UM RAIO ATINGIU VOCÊ!\n";
                            cout << "Raios não perdoam, suas ultimas palavras foram cinzas\n";
                            cout << "Bom, pelo menos agora você matou a vontade de tomar vitamina(literalmente)\n";//TROCA DE PALAVRAS GENIAL HAHAHAHAHAHA
                            if (status_achiviement_thunderstruck != open) {
                                cout << "Conquista SECRETA adquirida:\n" << "|*| Thunderstruck |*|\n";
                                status_achiviement_thunderstruck = open;
                                status_secret_achiviement_thunderstruck = "|*| Thunderstruck |*|";
                            }  
                            break;
                        } else if (qtd_choose_times != 3) {
                            cout << "Você decide usar energia solar\n";
                            cout << "Pega uma placa solar velha, vai para fora e... está de noite\n";
                            cout << "Você testa usar as luzes de casa porem não são o suficiente...\n";
                            cout << "Desistir não é uma opção e agora, o que deseja fazer?\n";
                            cout << "Digite 0 para desistir\n";
                            cout << "Digite 1 para chorar no banheiro\n";
                            cin >> second_decision_case_3;
                                switch (second_decision_case_3) {
                                case 0:
                                    cout << "Para que desistir? Você foi tão longe!\nVamos tentar novamente";
                                    cout << endl;
                                    break;
                                case 1:
                                    cout << "Ações tem consequencias!\n";
                                    cout << "Você vai ao banheio e derrama lagrimas\n";
                                    cout << "Parabéns, você estragou o seu dia!\n";
                                    cout << "Pelo menos economizou energia elétrica e a água do banho...\n";
                                    if (status_achiviement_sad != open) {
                                    cout << "Conquista adquirida:\n" << "|*| Banho de lágrimas |*|\n";
                                    status_achiviement_sad = open;
                                    }
                                    break;
                                default:
                                    cout << "Resposta incompreendida, vamos tentar novamente?\n";
                                    cout << "Quer quebrar o meu código?, DESISTA!\n";
                                    cout << "Joga direito, por favor ):\n";
                                break;
                                }
                        } else {
                            cout << "Resposta incompreendida, vamos tentar novamente?\n";
                            cout << "Quer quebrar o meu código?, DESISTA!\n";
                            cout << "Joga direito, por favor ):\n";
                            break;
                        } 
                    break;
                default:
                    cout << "Resposta incompreendida, vamos tentar novamente?\n";
                    cout << "Quer quebrar o meu código?, DESISTA!\n";
                    cout << "Joga direito, por favor ):\n";
                    break;
                }
            } else if (first_decision == "N" || first_decision == "n") {
               cout << "Parabéns, segurança em primeiro lugar!\n";
               if (status_achiviement_fear != open) {
               status_achiviement_fear = open;
               cout << "Conquista adquirida:\n" << "|*| Medroso |*|\n";
               }
            } else {
                cout << "Resposta incompreendida, vamos tentar novamente?\n";
                cout << "Quer quebrar o meu código?, DESISTA!\n";
                cout << "Joga direito, por favor ):\n";
                continue;
            }
            break;
        case 1: 
            // Garante que comece vazia para não imprimir lixo
            complete_all_the_game = ""; 

            // Parabens ao platinar
            if (status_achiviement_fear == open && 
                status_achiviement_good == open && 
                status_achiviement_sad == open && 
                status_achiviement_boring == open && 
                status_achiviement_tetanus == open && 
                status_achiviement_fire == open && 
                status_achiviement_hospital == open && 
                status_achiviement_thunderstruck == open && 
                status_achiviement_bad_drink == open && 
                status_achiviement_cheese == open) {
                
                complete_all_the_game = "\n====================================================================\n"
                                        "A JORNADA FOI CONCLUIDA. A VITAMINA FOI ALCANÇADA.\n\n"
                                        "Mitos contavam sobre um destemido guerreiro que enfrentaria o dilema dos 110V vs 220V.\n"
                                        "Você não apenas enfrentou o perigo, como escreveu seu nome nas estrelas (ao lado do foguete do Zé Ruela).\n\n"
                                        "TODAS AS CONQUISTAS DESBLOQUEADAS!\n\n"
                                        "O universo da vitamina agora descansa em paz. Obrigado por jogar!\n"
                                        "====================================================================\n";
            }

            // Verificar conquistas
            cout << "Conquistas:\n" << endl;
            cout << "|----Nome----|            |--Status--|\n";
            cout << "|*| Medroso |*|             " << status_achiviement_fear << endl;
            cout << "|*| Final Bom |*|           " << status_achiviement_good << endl;
            cout << "|*| Banho de lágrimas |*|   " << status_achiviement_sad << endl;
            cout << "|*| Chato até no nome |*|   " << status_achiviement_boring << endl;
            cout << "|*| Tézétano |*|            " << status_achiviement_tetanus << endl;
            cout << "|*| Celebridade de rua |*|  " << status_achiviement_fire << endl;
            cout << "|*| Aranha-Céu |*|          " << status_achiviement_hospital << endl;
            cout << status_secret_achiviement_thunderstruck << "   " << status_achiviement_thunderstruck << endl;
            cout << status_secret_achiviement_bad_drink << "   " << status_achiviement_bad_drink << endl;
            cout << status_secret_achiviement_cheese << "   " << status_achiviement_cheese << endl;
            
            // Só imprime a mensagem se ela tiver conteúdo (se o if da platina foi executado)
            if (!complete_all_the_game.empty()) {
                cout << complete_all_the_game << endl;
            }
            break;
        case 2:
            cout << "Jogo resetado com sucesso!\n";
            break; // Reseta o loop, reniciando o loop for sem perder progresso
        case 3:
            cout << "Fechando o programa...\n" ;
            cout << "Obrigado por jogar!";
            return 0; // Encerra o int main(void) fechando o programa
        default:
            cout << "Resposta incompreendida, vamos tentar novamente?\n";
            cout << "Quer quebrar o meu código?, DESISTA!\n";
            cout << "Joga direito, por favor ):\n";
            break;
        }
    }
     // Segurança para fechar o código em caso de algum erro que faça o jogador sair do loop
    return 0;
}