from ctypes import *
lib = cdll.LoadLibrary( './libspike.so' )

prototype = CFUNCTYPE( None, c_char_p )

class Spike( object ):
    def __init__( self ):
        self.obj = lib.spike_new( )

    def print_description( self ):
        lib.spike_print_description( self.obj )

    def invoke_callback( self, func ):
    	callback = prototype( func )
    	lib.spike_invoke_callback( callback )
