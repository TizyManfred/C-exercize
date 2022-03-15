//direttive per il preprocessore
#include <stdio.h>
#include <unistd.h>

//definizione di costanti
#define VAR 1   //a VAR assegnamo 1
#define VAR3 'X'  // a VAR3 assegnamo il carattere X

int main (){
	//definire delle variabili (tutte le tipologie)
	int var = 10, num;  //16 bit o 32 bit (dipende dalla macchina) 
	char carattere = 'c', ins;  //8 bit
	short var1 = 9;  //16 bit
	long var2 = 300;  //32 bit 
	float numReal = 3.2;   //32 bit 
	double numReal2 = 4.65;  //64 bit
	
	// definire una costante 
	const int VAR2 = 5;
	
	//output
	printf("Hello World\n");
	
	//output di numeri (costanti)
	printf("%d\n", VAR);
	printf("%d\n", VAR2);
	
	//output di caratteri (costanti)
	printf("%c\n", VAR3);
	
	//stampare la dimensione 
	printf("%d\n", sizeof(int));
	printf("Le variabili di tipo long occupan %d byte di memoria\n", sizeof(long));
	
	//output con il tab
	printf ("%d \t %d\n", var, var1);
	
	//output float
	printf("%f", numReal)
	
	//includere tempo di attesa in secondi
	sleep(1);
	
	//output con sovrascrizione della riga
	printf("\r %lf", numReal2);
	
	//per stampare la barra
	printf("Voglio stampare \\\n");
	
	//Per stampare il percento
	printf("Voglio stampare %%\n");
	
	//Per stampare le virgolette
	printf("\"Tiziano\"\n");
	
	//output
	printf("Inserisci il numero: ");
	
	//input
	scanf("%d", &num);
	
	//controllo
	printf ("Il numero inserito e': %d\n", num );
	
	//svuota gli input in coda
	fflush(stdin);
	
	//Input di un carattere
	printf("Inserisci un carattere: ");
	scanf(" %c", &ins);  // ricordare lo spazio altrimenti inserirà sempre invio(spazio)
	printf("Il carattere inserito e': %c");
	
	return 0;
}
