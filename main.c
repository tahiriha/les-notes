#include <stdio.h>
#include <stdlib.h>

int main()
{
    float class1[13],class2[15] , notes [28] ;
    float min , max , valid , P ;
    int i = 0;
    int j ; 

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
    
    for ( i=0 ; i<=12 ; i++)
    {
        notes[i] = class1[i];
    }
    for ( i=0 ; i<=14    ; i++)
    {
        notes[13 + i ] = class2[i];
    }

    for ( i = 0 ; i <= 28 ; i++ )
    {
        for ( j = i + 1 ; j <  28 ; i++ )
        {
            if ( notes[i] < notes [j])
            {
                P = notes [i];
                notes[i] = notes [j];
                notes [i] = P;
            }
        }
    }

    printf(" les notes des deux classe en ordre sont ");
    for ( i = 0 ; i <= 28 ; i++ )
    {
        printf("%f/n", &notes[i]);
    }





    return 0;
}
