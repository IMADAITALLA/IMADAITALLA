#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED
#endif // EXERCICE1_H_INCLUDED
 int EXERCICE1(){
     int QUANTITE;
    float prix_unitaire;
    printf("ENTRER LE PRIX UNITAIRE\n");
    scanf("%f",&prix_unitaire);
    printf("ENTRER LA QUANTITE COMMANDER\n");
    scanf("%d",&QUANTITE);
    float prix_final=(QUANTITE*prix_unitaire)+(QUANTITE*prix_unitaire)*0.2;
    printf("prix_final :\n%.2f\n",prix_final);
}
