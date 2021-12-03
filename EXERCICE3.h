#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED
#endif // EXERCICE3_H_INCLUDED
int EXERCICE3(){
    int i,a,max,min;
    char dem;
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
    printf("\nvous calculons le minimum ou le maximum ?");
    scanf("%s",&dem);
    if(dem=='a'|| dem=='A')
    printf( "le minimum est:%d\n",min);
    if(dem=='i'|| dem=='I')
    {printf( "le maximum est:%d\n",max);}
    else printf("\nreponse incorrecte");
}
