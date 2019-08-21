#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    float trairXtrair=0, trairXcooperar=0, cooperarXcooperar=0, partidas=0;
    char continuar= 'n';
    char nome[20];
    printf("\t\t\t DILEMA DO PRISIONEIRO\n\n\n");
    printf("\tVoce e um comparsa fizeram um assalto a banco, porem a policia nao tem provas o suficiente para incriminalos.\n");
    printf("\tPor isso, um agente especializado colocou os dois em salas separadas, e os interrogou, propondo que contassem a verdade, a fim de ter uma pena mais leve.\n\n");
    printf("Voce tera que escolher se deseja trair seu companheiro e contar a verdade a policia, ou cooperar com seu amigo ficando calado.\n");
    printf("\tPrimeiro, o oficial interrogou seu parceiro, e agora chegou a sua vez, porem, o guarda so ira revelar a resposta dele depois que ouvir a sua.\n");
    printf("As possibilidades de acordo que o policial propos foram:\n\n");
    printf("\t1-Se um traiu o colega e contou tudo, enquanto o outro cooperou, o que traiu estara livre, enquanto o que cooperou, pega 10 anos de prisao.\n");
    printf("\t2-Se os dois trairem, ambos pegam 5 anos de prisao\n");
    printf("\t3-Se os dois cooperarem entre si, e ficarem quietos, ambos pegam 2 anos de prisao.\n");
    printf("\n\tAgora chegou a sua vez de escolher, se deseja cooperar com o seu companheiro e nao dizer nada, ou trai-lo e contar tudo a policia.\n");
    printf("\n\n\n Digite seu nome para continuar: ");
    scanf("%s", nome);
    getchar();
    system("cls");
    printf("\t\t\tCOMO O JOGO FUNCIONA?");
    printf("\n\nO jogo faz uma simulacao do que poderia acontecer. Lembrando que sera possivel fazer a escolha varias vezes, diferente do que aconteceria na vida real.");
    printf("\n\nPrimeiro voce deve escolher o modo em que quer jogar, dependendo dele, suas escolhas influenciam a do seu parceiro, que no caso a maquina.");
    printf("\n\nLogo depois, voce deve escolher entre trair, numero 1, e cooperar, numero 2");
    printf("\n\nVoce devera usar os caracteres 'S' e 'N' para navegar entre as opcoes.");
    printf("\n\nAo encerrar o jogo, sera exibido os resultados das partidas.");
    printf("\n\n\nAperte enter para continuar...");
    getchar();
    system("cls");

    do {
            printf("\t\t\t DILEMA DO PRISIONEIRO\n\n\n");
            printf("Bem vindo %s !\n\n\n", nome);
printf("Modos de estrategia:\n");
printf("1.Sem iteracao: A maquina pode escolher qualquer opcao aleatoriamente.\n\n");
printf("2.Olho por oho: Repete a ultima jogada do usuario, ou seja, se ele escolheu trair na rodada anterior, a maquina ira trai-lo na rodada seguinte.\n\n");
printf("3.Olho por dois olhos: Repete a mesma jogada se o usuario a fizer 2 vezes ou mais seguidas.\n\n");
printf("4.Provador ingenuo: Repete a ultima jogada do usuario, porem pode haver traicao mesmo se na ultima rodada o jogador cooperou\n\n");
printf("5.Retaliador permanente: Cooperara ate que haja traicao, a partir dai, sempre ira trair\n\n");
printf("6.Encerrar jogo.\n\n");
int modo;
printf("Qual modo de jogo deseja escolher?\n");
scanf("%d", &modo);
if (modo!= 1 && modo!= 2 && modo!= 3 && modo!= 4 && modo!= 5 && modo!= 6){
    while(modo!=1 && modo!=2 && modo!=3 && modo!=4 && modo!=5 && modo!=6){
        printf("Invalido, escolha novamente!\n");
        scanf("%d", &modo);
    }

}
system("cls");

if (modo==1){
        do{ partidas++;
            int jogador;
            printf("\t\t\tSEM ITERACAO\n\n");
            printf("Para trair, digite 1, para cooperar, digite 2:\n");
            scanf("%d", &jogador);
            while(jogador != 1 && jogador!= 2){
                printf("Comando invalido!Para trair, digite 1, para cooperar, digite 2:\n");
                scanf("%d", &jogador);
            }
            srand(time(NULL));
                int escolha;
                escolha = 1 + rand() % 2;
        if (jogador==1){
            printf("Voce escolheu trair.\n");
            if(escolha==1){
                printf("Seu companheiro tambem te traiu, cada um pegou 5 anos de prisao.\n\n");
                trairXtrair++;
            }else{
                printf("Seu companheiro ficou em silencio e cooperou.Voce esta livre, porem ele pegara 10 anos de prisao.\n\n");
                trairXcooperar++;
            }
        }
        else{
            printf("Voce escolheu cooperar.\n");
            if(escolha==1){
                printf("Seu companheiro te traiu, voce pegara sozinho, 10 anos de prisao.\n\n");
                trairXcooperar++;
            }else{
            printf("Voces dois cooperaram, ambos ficarao 2 anos presos\n\n.");
            cooperarXcooperar++;
            }
        }

printf("Deseja continuar nesse modo de jogo s/n ?\n");
scanf(" %c", &continuar);
while(continuar!= 's' && continuar!= 'n' && continuar!= 'N' && continuar!='S'){
    printf("Invalido, digite novamente: s/n\n");
    scanf(" %c", &continuar);}

} while(continuar=='s' || continuar== 'S');
system("cls");
}



else if(modo==2){
        printf("\t\t\tOLHO POR OLHO\n\n");
        int escolha=0,jogador;

do{     partidas++;
        printf("Para trair, digite 1, para cooperar, digite 2:\n");
        scanf("%d", &jogador);
         while(jogador != 1 && jogador!= 2){
                printf("Comando invalido!Para trair, digite 1, para cooperar, digite 2:\n");
                scanf("%d", &jogador);
            }

        if (escolha==0){
            srand(time(NULL));
                escolha = 1 + rand() % 2;}
        if(jogador==1){
            printf("Voce escolheu trair.\n");
            if(escolha==1){
                printf("Seu companheiro tambem te traiu, cada um pegou 5 anos de prisao.\n\n");
                trairXtrair++;
            }else{
                printf("Seu companheiro ficou em silencio e cooperou.Voce esta livre, porem ele pegara 10 anos de prisao.\n\n");
                trairXcooperar++;
            }
        }else{
            printf("Voce escolheu cooperar.\n");
            if(escolha==1){
                printf("Seu companheiro te traiu, voce pegara sozinho, 10 anos de prisao.\n\n");
                trairXcooperar++;
            }else{
            printf("Voces dois cooperaram, ambos ficarao 2 anos presos\n\n.");
            cooperarXcooperar++;
            }
            }
        escolha=jogador;
printf("Deseja continuar nesse modo de jogo s/n?\n");
scanf(" %c", &continuar);
while(continuar!= 's' && continuar!= 'n' && continuar!= 'N' && continuar!='S'){
    printf("Invalido, digite novamente: s/n\n");
    scanf(" %c", &continuar);}
} while(continuar=='s' || continuar== 'S');
system("cls");
}



else if(modo==3){
        printf("\t\tOLLHO POR DOIS OLHOS\n\n");
        int anterior=0,anterior2=0, escolha, jogador;
do{
    partidas++;
     printf("Para trair, digite 1, para cooperar, digite 2:\n");
     scanf("%d", &jogador);
         while(jogador != 1 && jogador!= 2){
                printf("Comando invalido!Para trair, digite 1, para cooperar, digite 2:\n");
                scanf("%d", &jogador);
            }

    if(anterior2==jogador){
        escolha=anterior2;
    }else if(anterior2!=0){
        escolha=anterior2;
        anterior2=0;
    }else if(jogador!=anterior){
        srand(time(NULL));
        escolha = 1 + rand() % 2;
    }else{
    anterior2=jogador;
    srand(time(NULL));
        escolha = 1 + rand() % 2;
    }
    if(jogador==1){
            printf("Voce escolheu trair.\n");
            if(escolha==1){
                printf("Seu companheiro tambem te traiu, cada um pegou 5 anos de prisao.\n\n");
                trairXtrair++;
            }else{
                printf("Seu companheiro ficou em silencio e cooperou.Voce esta livre, porem ele pegara 10 anos de prisao.\n\n");
                trairXcooperar++;
            }
        }else{
            printf("Voce escolheu cooperar.\n");
            if(escolha==1){
                printf("Seu companheiro te traiu, voce pegara sozinho, 10 anos de prisao.\n\n");
                trairXcooperar++;
            }else{
            printf("Voces dois cooperaram, ambos ficarao 2 anos presos\n\n.");
            cooperarXcooperar++;
            }
            }
            anterior=jogador;
printf("Deseja continuar nesse modo de jogo s/n?\n");
scanf(" %c", &continuar);
while(continuar!= 's' && continuar!= 'n' && continuar!= 'N' && continuar!='S'){
    printf("Invalido, digite novamente: s/n\n");
    scanf(" %c", &continuar);}
} while(continuar=='s' || continuar== 'S');
system("cls");
}


else if(modo==4){ printf("\t\tPROVADOR INGENUO\n\n");
        int anterior=0, escolha, jogador;
do{ partidas++;
    printf("Para trair, digite 1, para cooperar, digite 2:\n");
    scanf("%d", &jogador);
         while(jogador != 1 && jogador!= 2){
                printf("Comando invalido!Para trair, digite 1, para cooperar, digite 2:\n");
                scanf("%d", &jogador);
            }
    if(anterior==0 || anterior==2){
        srand(time(NULL));
        escolha = 1 + rand() % 2;
    }else{
    escolha=anterior;
    }
    if(jogador==1){
            printf("Voce escolheu trair.\n");
            if(escolha==1){
                printf("Seu companheiro tambem te traiu, cada um pegou 5 anos de prisao.\n\n");
                trairXtrair++;
            }else{
                printf("Seu companheiro ficou em silencio e cooperou.Voce esta livre, porem ele pegara 10 anos de prisao.\n\n");
                trairXcooperar++;
            }
        }else{
            printf("Voce escolheu cooperar.\n");
            if(escolha==1){
                printf("Seu companheiro te traiu, voce pegara sozinho, 10 anos de prisao.\n\n");
                trairXcooperar++;
            }else{
            printf("Voces dois cooperaram, ambos ficarao 2 anos presos\n\n.");
            cooperarXcooperar++;
            }
            }
            anterior=jogador;

printf("Deseja continuar nesse modo de jogo s/n?\n");
scanf(" %c", &continuar);
while(continuar!= 's' && continuar!= 'n' && continuar!= 'N' && continuar!='S'){
    printf("Invalido, digite novamente: s/n\n");
    scanf(" %c", &continuar);}
} while(continuar=='s' || continuar== 'S');
system("cls");
}



else if(modo==5){ printf("\t\tRETALIADOR PERMANENTE\n\n");
        int anterior=2, escolha, jogador;
do{partidas++;
printf("Para trair, digite 1, para cooperar, digite 2:\n");
    scanf("%d", &jogador);
         while(jogador != 1 && jogador!= 2){
                printf("Comando invalido!Para trair, digite 1, para cooperar, digite 2:\n");
                scanf("%d", &jogador);
            }
        if(anterior==2){
            escolha=2;
        }else{
        escolha=1;
        }
        if(jogador==1){
            printf("Voce escolheu trair.\n");
            if(escolha==1){
                printf("Seu companheiro tambem te traiu, cada um pegou 5 anos de prisao.\n\n");
                trairXtrair++;
            }else{
                printf("Seu companheiro ficou em silencio e cooperou.Voce esta livre, porem ele pegara 10 anos de prisao.\n\n");
                trairXcooperar++;
            }
        }else{
            printf("Voce escolheu cooperar.\n");
            if(escolha==1){
                printf("Seu companheiro te traiu, voce pegara sozinho, 10 anos de prisao.\n\n");
                trairXcooperar++;
            }else{
            printf("Voces dois cooperaram, ambos ficarao 2 anos presos\n\n.");
            cooperarXcooperar++;
            }
            }
            if(jogador==1){
                anterior=1;
            }
printf("Deseja continuar nesse modo de jogo s/n?\n");
scanf(" %c", &continuar);
while(continuar!= 's' && continuar!= 'n' && continuar!= 'N' && continuar!='S'){
    printf("Invalido, digite novamente: s/n\n");
    scanf(" %c", &continuar);}
} while(continuar=='s' || continuar== 'S');
system("cls");
}



else{
        if(partidas==0){
            printf("\n\n\t\tFIM\n");
            printf("\tObrigado por jogar %s!\n\n", nome);
            printf("\nVoce nao jogou nenhuma vez.\n\n\n");
        }else{
    printf("\n\n\t\tFIM\n");
    printf("\tObrigado por jogar %s!\n\n", nome);
    printf("No total ocorerram %.0f partidas.\n", partidas);
    printf("A porcentagem de vezes que os dois trairam foi: %.2f%%\n\n", trairXtrair / partidas * 100);
    printf("A porcentagemm de vezes que um traiu e o outro cooperou foi: %.2f%%\n\n", trairXcooperar / partidas *100);
    printf("A porcentagem de vezes que os dois cooperaram foi: %.2f%%\n\n", cooperarXcooperar / partidas *100);}
    getchar();
    break;
}
    }while(continuar== 'n' || continuar== 'N');
return 0;}
