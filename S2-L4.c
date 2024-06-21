#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void loadingScreen();
void play();
int validateResponse(int quest, char ans, int points);
void choiceMethod(char);
void newMatch();
int main(){
  char choice = {'\0'};
    loadingScreen();
    printf("\t\t\t\tStarting Menu\n");
    printf("A. Nuova partita\n");
    printf("B. Esci\n");
    scanf("%c", &choice);
    getchar();
    choiceMethod(choice);
    
}

void choiceMethod(char choice){
    switch (choice)
    {
    case 'A':
    case 'a':
        printf("\n\t\t\tBenvenut nel gioco: Chi vuol essere Bitionario");
        play();
        break;
     case 'B':
     case 'b':
        printf("\n\t\t\tAddio, alla prossima\n");
        break;
    default:
        printf("\n\t\t\tPuoi scegliere solo tra : <A> e <B>");
        scanf("%c", &choice);
                choiceMethod(choice);
        break;
    }
}

int validateResponse(int quest, char ans, int points){
    bool v = false;
    char correctAns = {'\0'};

    switch (quest)
    {
    case 1:
        correctAns = 'C';
        correctAns = 'c';
        break;
    case 2:
        correctAns = 'B';
        correctAns = 'b';
        break;
    case 3:
        correctAns = 'D';
        correctAns = 'c';
        break;
    case 4:
        correctAns = 'C';
        correctAns = 'c';
        break;
    case 5:
        correctAns = 'A';
        correctAns = 'a';
        break;
    default:
        break;
    }

 if(toupper(ans) == correctAns){

        points ++;
        printf("\n\t\t\tComplimenti, risposta corretta!\n\t\t\tIl tuo punteggio ora è : %d", points);


    }
    else {
        printf("\n\t\t\tHAI SBAGLIATO, SARAI PIU' FORTUNATO LA PROSSIMA VOLTA!!\n\t\t\tIl tuo punteggio ora è : %d", points);

    }
    return points;

}


void play(){
    int points = 0;
    char name[15];
    char Risposta;
    
    printf("\n\t\t\tCome ti chiami?\n");
    scanf("%s", &name);
    getchar();

    printf("\n\t\t\t\t\tPerfetto %s , ecco a te la prima domanda:", name);
    sleep(0.5);
    printf("\n\t\t\tQuanto fa 15 e 18?");
    printf("\n\t\t\tA)34  B)36  C)33  D)29\n");
    scanf("%c", &Risposta);
    getchar();
    points = validateResponse(1, Risposta, points);
    sleep(0.3);

    printf("\n\t\t\t\t\tAndiamo con la seconda domanda:");
    sleep(0.5);
    printf("\n\t\t\tDi che nazionalità era il padre di Ajeje Brazorf??");
    printf("\n\t\t\tA)Marocchina  B)Serbo-Croata  C)Italiana  D)Eschimese\n");
    scanf("%c", &Risposta);
    getchar();
    points = validateResponse(2, Risposta, points);
    sleep(0.3);

    printf("\n\t\t\t\t\tEcco la terza domanda:");
    sleep(0.5);
    printf("\n\t\t\tIn quale binario deve entrare Harry Potter per arrivare ad Hogwarts?");
    printf("\n\t\t\tA)29 bis  B)17  C)6 ⅜  D)9 ¾\n");
    scanf("%c", &Risposta);
    getchar();
    points = validateResponse(3, Risposta, points);
    sleep(0.3);

    printf("\n\t\t\t\t\tOra la quarta domanda:");
    sleep(0.5);
    printf("\n\t\t\tDa quanti bit è formato un IPv4?");
    printf("\n\t\t\tA)65  B)128  C)32  D)42\n");
    scanf("%c", &Risposta);
    getchar();
    points = validateResponse(4, Risposta, points);
    sleep(0.3);

    printf("\n\t\t\t\t\tOk %s, adesso siamo alla quinta e ultima domanda:", name);
    sleep(0.5);
    printf("\n\t\t\tQual è il significato della vita?");
    printf("\n\t\t\tA)42 B)Soldi  C)28  D)Amore\n");
    scanf("%c", &Risposta);
    getchar();
    points = validateResponse(5, Risposta, points);
    sleep(0.3);

    
    printf("\nHai finito la partita, il tuo punteggio è %d", points);
    newMatch();
    

}

void newMatch(){
    char choice2 = {'\0'};
    printf("\nVuoi iniziare un'altra partita?\n A. Si B. No\n");
    scanf("%c", &choice2);
    getchar();
    switch (choice2)
    {
    case 'A':
    case 'a':
        play();
        break;
    case 'B':
    case 'b':
        printf("\n\t\t\tAddio, alla prossima\n");
        break;
    default:
        printf("\n\t\t\tPuoi scegliere solo tra : <A> e <B>");
        newMatch(choice2);
        break;
    }
    
}

void loadingScreen(){
    printf("\e[?251]");
    setconsoleCP(437);
    setconsoleoutputcp(437);
    int bar1 = 177, bar2 = 219;
    printf("\n\n\n\t\t\t\tLoading...");
    printf("\n\n\n\t\t\t\t");
    for(int i = 0; i<25; i++){
        printf("%c", (char)bar1);
    }
        printf("\r");
        printf("\t\t\t");
    for(int i = 0; i<25; i++){
        printf("%c", (char)bar1);
        sleep(0.15);
    }
    return 0;
}
