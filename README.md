pyton to c binding spike
===============

Spike example binding of Python and C++ via CTypes (http://docs.python.org/2/library/ctypes.html).

dependencies
===============

pip install ctypes

build
===============

g++ -c -fPIC spike.cpp -o spike.o

g++ -shared -o libspike.so spike.o

execution
===============

python test.py
