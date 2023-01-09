#!/bin/bash
<<<<<<< HEAD
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
>>>>>>> aad9c7c5c2747a595f5c025aab069faff18811fb
