#include <stdio.h>
#include <string.h>

int main( )
{
   char source[ ] = " bhagyshree " ;
   char target[ ]= " pavan" ;

   printf ( "\nSource string = %s", source ) ;
   printf ( "\nTarget string = %s", target ) ;

   strcat ( target, source ) ;

   printf ( "\nTarget string after strcat( ) = %s", target ) ;
}
