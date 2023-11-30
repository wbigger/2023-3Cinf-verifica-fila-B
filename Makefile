main:
	gcc *.c -o main

clean:
	rm main *.o

test: main
	bash test.sh