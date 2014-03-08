#!/usr/bin/python

from spikeWrapper import Spike

def print_message( msg ):
   print msg

spike = Spike( )

spike.print_description( )

spike.invoke_callback( print_message )
