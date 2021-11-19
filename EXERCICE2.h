#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED



#endif // EXERCICE2_H_INCLUDED
int EXERCICE2(){
    int n1,n2,swap;
    printf(" Entrer n1 et n2\n");
    scanf("%d%d",&n1,&n2);
    swap = n1;
    n1 = n2 ;
    n2= swap;
    printf("les valeurs devient :\nn1:%d\nn2 :%d\n",n1,n2);
}
