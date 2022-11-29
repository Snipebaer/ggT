default: ggT

ggT.o: ggT.c
	gcc -c ggT.c -o ggT.o
ggT: ggT.o
	gcc ggT.o -o ggT

clean: 
	-rm -f ggT.o
	-rm -f ggT
