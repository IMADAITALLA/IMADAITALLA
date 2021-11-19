#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED



#endif // EXERCICE6_H_INCLUDED
int EXERCICE6(){
     int Q,FT;
    float P=23.0, M;
    printf("quantite ");
    scanf("%d",&Q);
    M=Q*P;
    printf("Le montant de la facturation est :%2.f DH",M);
    if (M<200){
        M=M+FT;
        printf("Le montant de la facturation est :%2.f DH",M);
    }
}
