test: test.c functions.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra test.c /home/parijat/Codes/mylibs-c/myalgo/myalgo.so /home/parijat/Codes/mylibs-c/myio/myio.so functions.so -o test

functions.so: functions.c functions.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c functions.c -o functions.so