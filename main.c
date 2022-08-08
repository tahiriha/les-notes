#include <stdio.h>
#include <stdlib.h>

int main()
{
    float class1[13],class2[15] ;
    float min , max , valid ;
    int i = 0;

            for ( i=0 ; i<13 ; i++ ) {
                printf("veuillez saisir la note de l'etudiant de la classe 1  numero  %d \n", i+1 );
                scanf("%f", &class1[i]);
            }
        max = class1[0];
        min = class1[0];

            for ( i=1 ; i < 13 ; i++)  {

            if     ( max < class1[i])    {
                     max = class1 [i];
                }
            }
   printf ("la note maximal de la classe 1 est %f \n " , max );


        for ( i = 1 ; i < 13 ; i++){

             if ( min > class1[i]){
                  min = class1[i];
                }
            }
   printf ("la note minimal de la classe 1 est %f \n" , min);

    valid = 0;
    for ( i = 0 ; i <13 ; i++) {
        if ( class1[i] >= 10) {
            valid ++ ;
        }
    }

printf (" le nombre des etudiants vaLidee est %f \n", valid);



   for ( i=0 ; i<15 ; i++ ) {
    printf("veuillez saisir la note de l'etudiant de la classe 2  numero  %d \n", i+1 );
    scanf("%f", &class2[i]);
            }
            max = class2[0];
            min = class2[0];

        for ( i = 1 ; i < 15 ; i++)  {


             if     ( max > class2[i])    {
                      max = class2 [i];
                }
            }
             printf ("la note maximal de la classe 2  est %f \n " , max );


        for ( i=0 ; i < 15 ; i++) {

            if ( min < class2[i]){
                 min = class2[i];
                }
            }
   printf ("la note minimal de la classe 2  est %f \n" , min);

    valid = 0;
    for ( i = 0 ; i <13 ; i++) {
        if ( class1[i] >= 10) {
            valid ++ ;
        }
    }

printf (" le nombre des etudiants vaLidee est %f \n", valid);





    return 0;
}
