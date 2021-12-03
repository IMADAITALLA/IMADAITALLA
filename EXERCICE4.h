#ifndef EXERCICE4_H_INCLUDED
#define EXERCICE4_H_INCLUDED
#endif // EXERCICE4_H_INCLUDED
int EXERCICE4(){
    int n1,n2,n3,M;
    printf("\nEntrée 3 notes:",n1,n2,n3);
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    M=(n1+n2+n3)/3;
    printf("la moyenne de ces notes est: %d",M);
    if(M>16){ printf("\nla mention est Très Bien");}
    else if(M<=16 && M>=14){ printf("\nla mention est Bien");}
    else if(M<=12 && M>=10) {printf("\nla mention est Passable");}
    else if(M<10) {printf("\nla mention est Mediocre");}
}
