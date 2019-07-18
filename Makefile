Test : Main.o
	g++ Main.cpp -o Test
	
.PHONY:clean
clean:
	rm -rf Test
	rm -rf *.o
