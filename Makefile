build:
	@gcc -Wall -g -c $(file).c -o $(file).o
	@gcc -o $(file).exe $(file).o   