#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct suporte{
    char nome[20];
    char tipo[10];
} suporte;

typedef struct atirador{
    char nome[20];
    suporte sinergia[3];
} atirador;

int main(){
    // ----- PREENCHENDO BANCO DE DADOS
    atirador todosAdc[26];
    suporte todosSup[36];
    suporte main[5];

    strcpy(todosSup[0].nome, "Renata");strcpy(todosSup[0].tipo, "peel");strcpy(todosSup[1].nome, "Janna");strcpy(todosSup[1].tipo, "peel");
    strcpy(todosSup[2].nome, "Soraka");strcpy(todosSup[2].tipo, "sustain");strcpy(todosSup[3].nome, "Sona");strcpy(todosSup[3].tipo, "sustain");
    strcpy(todosSup[4].nome, "Nami");strcpy(todosSup[4].tipo, "peel");strcpy(todosSup[5].nome, "Yuumi");strcpy(todosSup[5].tipo, "sustain");
    strcpy(todosSup[6].nome, "Senna");strcpy(todosSup[6].tipo, "sustain");strcpy(todosSup[7].nome, "Seraphine");strcpy(todosSup[7].tipo, "poke");
    strcpy(todosSup[8].nome, "Lulu");strcpy(todosSup[8].tipo, "peel");strcpy(todosSup[9].nome, "Zilean");strcpy(todosSup[9].tipo, "peel");
    strcpy(todosSup[10].nome, "Taric");strcpy(todosSup[10].tipo, "peel");strcpy(todosSup[11].nome, "Lux");strcpy(todosSup[11].tipo, "poke");
    strcpy(todosSup[12].nome, "Morgana");strcpy(todosSup[12].tipo, "peel");strcpy(todosSup[13].nome, "Xerath");strcpy(todosSup[13].tipo, "poke");
    strcpy(todosSup[14].nome, "Karma");strcpy(todosSup[14].tipo, "poke");strcpy(todosSup[15].nome, "Zyra");strcpy(todosSup[15].tipo, "poke");
    strcpy(todosSup[16].nome, "Nautilus");strcpy(todosSup[16].tipo, "engage");strcpy(todosSup[17].nome, "Bardo");strcpy(todosSup[17].tipo, "peel");
    strcpy(todosSup[18].nome, "Vel'Koz");strcpy(todosSup[18].tipo, "poke");strcpy(todosSup[19].nome, "Thresh");strcpy(todosSup[19].tipo, "engage");
    strcpy(todosSup[20].nome, "Ashe");strcpy(todosSup[20].tipo, "poke");strcpy(todosSup[21].nome, "Rakan");strcpy(todosSup[21].tipo, "engage");
    strcpy(todosSup[22].nome, "Pyke");strcpy(todosSup[22].tipo, "engage");strcpy(todosSup[23].nome, "Blitzcrank");strcpy(todosSup[23].tipo, "engage");
    strcpy(todosSup[24].nome, "Brand");strcpy(todosSup[24].tipo, "poke");strcpy(todosSup[25].nome, "Swain");strcpy(todosSup[25].tipo, "poke");
    strcpy(todosSup[26].nome, "Braum");strcpy(todosSup[26].tipo, "peel");strcpy(todosSup[27].nome, "Tahm Kench");strcpy(todosSup[27].tipo, "peel");
    strcpy(todosSup[28].nome, "Shaco");strcpy(todosSup[28].tipo, "poke");strcpy(todosSup[29].nome, "Rell");strcpy(todosSup[29].tipo, "engage");
    strcpy(todosSup[30].nome, "Leona");strcpy(todosSup[30].tipo, "engage");strcpy(todosSup[31].nome, "Alistar");strcpy(todosSup[31].tipo, "peel");
    strcpy(todosSup[32].nome, "Maokai");strcpy(todosSup[32].tipo, "peel");strcpy(todosSup[33].nome, "Amumu");strcpy(todosSup[33].tipo, "engage");
    strcpy(todosSup[34].nome, "Pantheon");strcpy(todosSup[34].tipo, "engage");strcpy(todosSup[35].nome, "Miss Fortune");strcpy(todosSup[35].tipo, "poke");

    todosAdc[25].sinergia[0] = todosSup[2];todosAdc[25].sinergia[1] = todosSup[9];todosAdc[25].sinergia[2] = todosSup[7];
    todosAdc[24].sinergia[0] = todosSup[5];todosAdc[24].sinergia[1] = todosSup[20];todosAdc[24].sinergia[2] = todosSup[14];
    todosAdc[23].sinergia[0] = todosSup[2];todosAdc[23].sinergia[1] = todosSup[12];todosAdc[23].sinergia[2] = todosSup[14];
    todosAdc[22].sinergia[0] = todosSup[5];todosAdc[22].sinergia[1] = todosSup[0];todosAdc[22].sinergia[2] = todosSup[12];
    todosAdc[21].sinergia[0] = todosSup[3];todosAdc[21].sinergia[1] = todosSup[10];todosAdc[21].sinergia[2] = todosSup[0];
    todosAdc[20].sinergia[0] = todosSup[10];todosAdc[20].sinergia[1] = todosSup[23];todosAdc[20].sinergia[2] = todosSup[0];
    todosAdc[19].sinergia[0] = todosSup[12];todosAdc[19].sinergia[1] = todosSup[4];todosAdc[19].sinergia[2] = todosSup[0];
    todosAdc[18].sinergia[0] = todosSup[21];todosAdc[18].sinergia[1] = todosSup[23];todosAdc[18].sinergia[2] = todosSup[1];
    todosAdc[17].sinergia[0] = todosSup[10];todosAdc[17].sinergia[1] = todosSup[3];todosAdc[17].sinergia[2] = todosSup[17];
    todosAdc[16].sinergia[0] = todosSup[12];todosAdc[16].sinergia[1] = todosSup[9];todosAdc[16].sinergia[2] = todosSup[0];
    todosAdc[15].sinergia[0] = todosSup[20];todosAdc[15].sinergia[1] = todosSup[2];todosAdc[15].sinergia[2] = todosSup[19];
    todosAdc[14].sinergia[0] = todosSup[1];todosAdc[14].sinergia[1] = todosSup[0];todosAdc[14].sinergia[2] = todosSup[17];
    todosAdc[13].sinergia[0] = todosSup[10];todosAdc[13].sinergia[1] = todosSup[3];todosAdc[13].sinergia[2] = todosSup[17];
    todosAdc[12].sinergia[0] = todosSup[20];todosAdc[12].sinergia[1] = todosSup[14];todosAdc[12].sinergia[2] = todosSup[6];
    todosAdc[11].sinergia[0] = todosSup[3];todosAdc[11].sinergia[1] = todosSup[5];todosAdc[11].sinergia[2] = todosSup[10];
    todosAdc[10].sinergia[0] = todosSup[20];todosAdc[10].sinergia[1] = todosSup[2];todosAdc[10].sinergia[2] = todosSup[26];
    todosAdc[9].sinergia[0] = todosSup[10];todosAdc[9].sinergia[1] = todosSup[23];todosAdc[9].sinergia[2] = todosSup[5];
    todosAdc[8].sinergia[0] = todosSup[26];todosAdc[8].sinergia[1] = todosSup[10];todosAdc[8].sinergia[2] = todosSup[0];
    todosAdc[7].sinergia[0] = todosSup[10];todosAdc[7].sinergia[1] = todosSup[0];todosAdc[7].sinergia[2] = todosSup[5];
    todosAdc[6].sinergia[0] = todosSup[4];todosAdc[6].sinergia[1] = todosSup[0];todosAdc[6].sinergia[2] = todosSup[3];
    todosAdc[5].sinergia[0] = todosSup[1];todosAdc[5].sinergia[1] = todosSup[9];todosAdc[5].sinergia[2] = todosSup[2];
    todosAdc[0].sinergia[0] = todosSup[0];todosAdc[0].sinergia[1] = todosSup[18];todosAdc[0].sinergia[2] = todosSup[17];
    todosAdc[1].sinergia[0] = todosSup[3];todosAdc[1].sinergia[1] = todosSup[13];todosAdc[1].sinergia[2] = todosSup[0];
    todosAdc[2].sinergia[0] = todosSup[14];todosAdc[2].sinergia[1] = todosSup[24];todosAdc[2].sinergia[2] = todosSup[11];
    todosAdc[3].sinergia[0] = todosSup[1];todosAdc[3].sinergia[1] = todosSup[10];todosAdc[3].sinergia[2] = todosSup[3];
    todosAdc[4].sinergia[0] = todosSup[2];todosAdc[4].sinergia[1] = todosSup[10];todosAdc[4].sinergia[2] = todosSup[3];

    main[0] = todosSup[7];main[1] = todosSup[14];main[2] = todosSup[16];main[3] = todosSup[20];main[4] = todosSup[30];

    strcpy(todosAdc[0].nome, "Jhin");
    strcpy(todosAdc[1].nome, "Twitch");
    strcpy(todosAdc[2].nome, "Seraphine");
    strcpy(todosAdc[3].nome, "Ezreal");
    strcpy(todosAdc[4].nome, "Ashe");
    strcpy(todosAdc[5].nome, "Vayne");
    strcpy(todosAdc[6].nome, "Miss Fortune");
    strcpy(todosAdc[7].nome, "Samira");
    strcpy(todosAdc[8].nome, "Zeri");
    strcpy(todosAdc[9].nome, "Kai'Sa");
    strcpy(todosAdc[10].nome, "Jinx");
    strcpy(todosAdc[11].nome, "Lucian");
    strcpy(todosAdc[12].nome, "Tahm Kench");
    strcpy(todosAdc[13].nome, "Caitlyn");
    strcpy(todosAdc[14].nome, "Draven");
    strcpy(todosAdc[15].nome, "Kog'Maw");
    strcpy(todosAdc[16].nome, "Veigar");
    strcpy(todosAdc[17].nome, "Tristana");
    strcpy(todosAdc[18].nome, "Swain");
    strcpy(todosAdc[19].nome, "Xayah");
    strcpy(todosAdc[20].nome, "Kalista");
    strcpy(todosAdc[21].nome, "Yasuo");
    strcpy(todosAdc[22].nome, "Sivir");
    strcpy(todosAdc[23].nome, "Varus");
    strcpy(todosAdc[24].nome, "Ziggs");
    strcpy(todosAdc[25].nome, "Aphelios");

    // ----- FIM -----

    while(1){
    // ----- LEITURA DE DADOS
    atirador aliado;
    char nomeLido[20], tipoLido[20];
    int flagAdc, flagTipo, flagRecomendado;
    flagRecomendado = 0;
    flagAdc = 0;
    flagTipo = 0;

    printf("Atirador aliado\n>> ");
    setbuf(stdin,NULL);
    scanf("%s", &nomeLido);
    if(strcmp(nomeLido, "n") == 0)
        flagAdc = 1;
    else{
    // ----- BUSCA O ATIRADOR CORRESPONDENTE -----
        for(int i = 0; i < 26; i++)
            if(strcmp(nomeLido, todosAdc[i].nome) == 0){
                aliado = todosAdc[i];
                break;
            }
    // ----- FIM -----
    }

    printf("Tipo de suporte adversario\n>> ");
    setbuf(stdin,NULL);
    scanf("%s", &tipoLido);
    if(strcmp(tipoLido, "n") == 0)
        flagTipo = 1;
    // ----- FIM -----

    printf("\n----- CAMPEOES RECOMENDADOS -----\n");

    // ----- CONFERIR OS DADOS QUE FORAM COLETADOS -----
    if(flagAdc == 1 && flagTipo == 0){ // Adc nao lido, tipo lido
        for(int i = 0; i < 36; i++){
            if(strcmp(tipoLido, "peel") == 0){
                if(strcmp(todosSup[i].tipo, "poke") == 0){
                    printf("%s\n", todosSup[i].nome);
                    flagRecomendado = 1;
                }
            }
            if(strcmp(tipoLido, "poke") == 0){
                if(strcmp(todosSup[i].tipo, "sustain") == 1){
                    printf("%s\n", todosSup[i].nome);
                    flagRecomendado = 1;
                }
            }
            if(strcmp(tipoLido, "sustain") == 0){
                if(strcmp(todosSup[i].tipo, "engage") == 0){
                    printf("%s\n", todosSup[i].nome);
                    flagRecomendado = 1;
                }
            }
            if(strcmp(tipoLido, "engage") == 0){
                if(strcmp(todosSup[i].tipo, "peel") == 0){
                    printf("%s\n", todosSup[i].nome);
                    flagRecomendado = 1;
                }
            }
        }
    }
    else if(flagAdc == 0 && flagTipo == 1){ // Adc lido, tipo nao lido
        for(int i = 0; i < 3; i++){
            printf("%s\n", aliado.sinergia[i].nome);
            flagRecomendado = 1;
        }
    }
    else if(flagAdc == 0 && flagTipo == 0){ // Ambos lido
        for(int i = 0; i < 3; i++){
            if(strcmp(tipoLido, "peel") == 0)
                if(strcmp(aliado.sinergia[i].tipo, "poke") == 0){
                    printf("%s\n", aliado.sinergia[i].nome);
                    flagRecomendado = 1;
                }
            if(strcmp(tipoLido, "poke") == 0)
                if(strcmp(aliado.sinergia[i].tipo, "sustain") == 0){
                    printf("%s\n", aliado.sinergia[i].nome);
                    flagRecomendado = 1;
                }
            if(strcmp(tipoLido, "sustain") == 0)
                if(strcmp(aliado.sinergia[i].tipo, "engage") == 0){
                    printf("%s\n", aliado.sinergia[i].nome);
                    flagRecomendado = 1;
                }
            if(strcmp(tipoLido, "engage") == 0)
                if(strcmp(aliado.sinergia[i].tipo, "peel") == 0){
                    printf("%s\n", aliado.sinergia[i].nome);
                    flagRecomendado = 1;
                }
        }

    }
    if((flagAdc == 1 && flagTipo == 1) || flagRecomendado == 0){ // Ambos nao lidos, ou nada recomendado
        for(int i = 0; i< 5; i++)
            printf("%s\n", main[i].nome);
    }
    // ----- FIM -----
    printf("----- FIM DA EXECUCAO -----\n\n");
    }

    return 0;
}
