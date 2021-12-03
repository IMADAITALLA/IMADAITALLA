#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED
#endif // EXERCICE6_H_INCLUDED
int EXERCICE6(){
     float prix_dachat, Coût_dachat,frais_dachat = 0;
	float TVA,frais_vente, prix_vente_bef_tax, sales_price_aft_tax;
	char type_de_produit;
	     printf("Saisissez le prix d'achat puis le type de produit :\n");
	     scanf("%f%s", &prix_dachat, &type_de_produit);
	     if(prix_dachat > 5000)
		    frais_dachat = (prix_dachat * 8) / 100;
	     else if(prix_dachat >= 1000 && prix_dachat <= 5000)
		        frais_dachat = (prix_dachat * 5) / 100;
	            Coût_dachat = prix_dachat + frais_dachat;
	            frais_vente = (Coût_dachat * 10) / 100;
	            prix_vente_bef_tax = Coût_dachat + frais_vente;
	    if(tolower(type_de_produit) == 'A')
		  TVA = (prix_vente_bef_tax * 20) / 100;
	    else if(tolower(type_de_produit) == 'B')
		      TVA = (prix_vente_bef_tax * 28) / 100;
	    else if(tolower(type_de_produit) == 'C')
		     TVA = (prix_vente_bef_tax * 33) / 100;
	sales_price_aft_tax = prix_vente_bef_tax + TVA;
	printf("Le coût d'achat : %.2f\nLes frais d'achat: %.2f\n", Coût_dachat, frais_dachat);
	printf("Les frais de vente : %.2f\nLe prix de vente avant taxes : %.2f\n", frais_vente, prix_vente_bef_tax);
	printf("Le prix de vente après taxes : %.2f\nLa valeur TVA est : %.2f\n", sales_price_aft_tax, TVA);
}
