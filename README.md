Bit Reversal Exercise
=====================

__Copyright (c) 2019 Rob Hemesley__

Build and run the unit tests by running 'make' from the 'BitReversalSrc'
directory on a command line. The unit tests will run and will output 
their results. 
Tested with gcc version 5.4.0 and Unity unit test harness (which is 
included). 

By default the makefile will compile the bitrev2.c implementation. 
Alternative implementations may be compied by editing the makefile line 
that begins with 

SRC_FILES1=$(UNITY_ROOT)/src/unity.c src/bitrev2.c 

The alternative bit-reversal implementations are to be found within the 
'bitReversalSrc/src/' sub-directory. 

The unit tests are to be found in 'bitReversalSrc/test/testBitrev.c'
