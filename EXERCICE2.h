#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED
#endif // EXERCICE2_H_INCLUDED
int EXERCICE2(){
    int i,a,max,min;
    printf("\n\nsaisir un nombre:");
    scanf("%d",&a);
    max=a;
    min=a;
    for(i=1;i<=2;i++){
        printf("saisir un autre nombre:");
        scanf("%d",&a);
        if(a>=max) max=a;
        if(a<=min) min=a;
    }
    printf( "le minimum est:%d\n",min);
    printf( "le maximum est:%d\n",max);
}
