#ifndef EXERCICE7_H_INCLUDED
#define EXERCICE7_H_INCLUDED
#endif // EXERCICE7_H_INCLUDED
int EXERCICE7(){
        int quantite, prix = 0;
	printf("Veuillez entrer le nombre de boîtes dont vous avez besoin :\n");
	scanf("%d", &quantite);
	while(1)
	{
		if(quantite >= 51)
		{
			prix += ((quantite - 50) * 80);
			quantite = 50;
		}
		else if(quantite >= 21 && quantite <= 50)
		{
			prix += ((quantite - 20) * 90);
			quantite = 20;
		}
		else if(quantite <= 20)
		{
			prix += quantite * 100;
			break;
		}
	}
	printf("Le prix final est :%d\n", prix);
}
