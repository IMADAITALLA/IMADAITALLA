#ifndef EXERCICE8_H_INCLUDED
#define EXERCICE8_H_INCLUDED
#endif // EXERCICE8_H_INCLUDED
int EXERCICE8(){
      int quantite, A = 0, B = 0, C = 0;
	printf("Entrez la quantité requise :\n");
	scanf("%d", &quantite);
	if(quantite < 10){
		printf("Quantité non prise en charge (inférieure à 10)\n");
		return 0;
	}
	while(quantite > 10){
		if(quantite >= 100){
			A = quantite / 100;
			quantite%= 100;}
		else if(quantite >= 30){
			B = quantite/ 30;
			quantite %= 30;}
		else if(quantite >= 10){
			C = quantite / 10;
			quantite %= 10;}}
	printf("Son %d de type A\n%d de type B\n%d de type C\nEt %d durera sans couverture \n", A, B, C, quantity);
}
