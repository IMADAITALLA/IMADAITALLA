#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED
#endif // EXERCICE1_H_INCLUDED
int EXERCICE1(){
    int n1,n2,a;
    printf("Entrée deux valeurs:",n1,n2);
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2){
        a=n1;
        n1=n2;
        n2=a;
        printf("La valeur de n1 est:%d \nLa valeur de n2 est:%d",n1,n2);
             }
    else{ printf("La valeur de n1 est:%d \nLa valeur de n2 est:%d",n1,n2);  }
    }
