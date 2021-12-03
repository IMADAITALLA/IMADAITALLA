#ifndef EXERCICE5_H_INCLUDED
#define EXERCICE5_H_INCLUDED
#endif // EXERCICE5_H_INCLUDED
int EXERCICE5(){
         float prix, Pourcentage, TVA, Prix_finalee;
	char Code_TVA;
	printf("\nEnterer le prix et le code de TVA :\n");
	scanf("%f%s", &prix, &Code_TVA);
	switch(tolower(Code_TVA)){
		case 'A': Pourcentage = 5.5;
			break;
		case 'B': Pourcentage = 7;
			break;
		case 'C': Pourcentage = 19;
			break;
		case 'D': Pourcentage = 33.33;
			break;
		default: printf("Code incorrect");
			break;           }

	TVA = (prix * Pourcentage) / 100;
	Prix_finalee = prix +  TVA;
	printf("Le pourcentage de TVA est :%.2f\n La valeur tva pour le donné est :%.2f\n Le Prix finale est :%.2f\n", Pourcentage, TVA, Prix_finalee);

}
