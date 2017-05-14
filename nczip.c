
//////// MAIN 
int main( int argc, char *argv[])
{ 
    char cwd[PATH_MAX];
    char targetfile[PATH_MAX];
    char cmdi[PATH_MAX];


    ////////////////////////////////////////////////////////
    if ( argc == 2)
     if ( fexist( argv[1] ) == 1 ) 
     {
          strncpy( targetfile, filename_newext( argv[1], "zip" ) , PATH_MAX );
          printf( "Convert from %s to %s\n", argv[1] , targetfile );

              strncpy( cmdi, "", PATH_MAX );
              strncat( cmdi , " zip  -r "  , PATH_MAX - strlen( cmdi ) -1 );
              strncat( cmdi , " \"" , PATH_MAX - strlen( cmdi ) -1 );
              strncat( cmdi , targetfile , PATH_MAX - strlen( cmdi ) -1 );
              strncat( cmdi , "\"  " , PATH_MAX - strlen( cmdi ) -1 );

              strncat( cmdi , " \"" , PATH_MAX - strlen( cmdi ) -1 );
              strncat( cmdi , argv[ 1 ] , PATH_MAX - strlen( cmdi ) -1 );
              strncat( cmdi , "\"  " , PATH_MAX - strlen( cmdi ) -1 );

              printf( "CMDI  %s \n" , cmdi ); 
              system( cmdi );
          return 0;
     }

   return 0; 

 }

