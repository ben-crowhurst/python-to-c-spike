#include <iostream>

using namespace std;

typedef void ( *Callback )( char* );

class Spike {
   public:
       void print_description( void ) {
              cout << "CTypes-C++ Spike." << endl;
       }
};

extern "C" {
    Spike* spike_new( void )
    {
      return new Spike( );
    }
   
   void spike_invoke_callback( Callback callback )
   {
   		if ( callback == NULL )
   		{
   			cout << "callback was null!" << endl;
   		}
   		else
   		{
   			callback( "Hello, From Corvusoft Solutions." );
   		}
   }

   void spike_print_description( Spike* spike )
   { 
   		spike->print_description( );
   }
}
