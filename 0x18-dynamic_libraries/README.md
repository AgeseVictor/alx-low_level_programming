# 0x18. C - Dynamic libraries
 Foundations - Low-level programming & Algorithm ― Hatching out

## libholberton.so, holberton.h
   * Create the dynamic library libholberton.so containing all the functions listed declared in the header file holberton.h
   > gcc -c -fPIC *.c
   > ls -la lib*
   > nm -D libholberton.so  
   > gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
   > export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH | ldd len | ./len
     
## 1-create_dynamic_lib.sh
   * Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.  
   > ls *.c
   > ./1-create_dynamic_lib.sh 
   > nm -D --defined-only liball.so

## 100-operations.so
   * Create a dynamic library that contains C functions that can be called from Python
   
## 101-make_me_win.sh
   * make me win the Jackpot?   
   """ 3. Code injection: Win the Giga Millions! """
  I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
  /* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
  * You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
  * The system is an Linux Ubuntu 16.04
  * The server has internet access
  * Our mole will be only able to run two commands from a shell script, without being detected by MSS
  * Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
  * Our mole has only the authorization to upload one file on the server. It will be your shell script
  * Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
  * Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
  * MSS will use the same terminal and session than our mole Before running the gm program, MSS always check the content of the directory
  * MSS always exit after running the program gmTL;DR; This is what is going to happen
  * Tip: LD_PRELOAD
  > . ./101-make_me_win.sh | rm 101-make_me_win.sh | ls -la | history -c | clear | ls -la | md5sum gm | ./gm 9 8 10 24 75 9 | exit    
-----------------------------------------------------------------------------------------------------------------
                 # Notes 
------------------------------------------------------------------------------------------------------------------
=> command makes a bunch of .o files from each .c file 

> gcc -c -fPIC *.c

to put together those objects files into one library

> gcc -shared -o liball.so *.o
> gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o   | create the library named
> gcc -shared -Wl,-soname,liball.so -o liball.so *.o  

> gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o

> gcc -shared -Wl,-soname,100-operations.so -o 100-operations.so *.o 


=> verify that you did it

> nm -D liball.so  | to find out what functions a library has
> ldd libtools.so  | To list the dependencies of a library,

=> How to use it compile the library with your main.c file to link it and use it 
add the location of your library files into the environmental variable

> export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
> gcc -L . 0-main.c -l all -o example

=> to get the functionality in other programs compile as 
> gcc our_sources.c -L. -ltools -o resulted_program
