
all:
	MethodCompiler -f BinChecker.una

clean :
	- /bin/rm -rf ../Libraries/AppsLib/x86_64*
	- /bin/rm -f ../Libraries/AppsLib/Makefile
