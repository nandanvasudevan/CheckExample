CXX:= gcc
OUTPUT := ../output
OBJ := %.o
DEFAULT: $(OUTPUT)/add.out

$(OUTPUT)/add.out: main.c $(OUTPUT)/add.o
	$(CXX) $^ -o $@

$(OUTPUT)/add.o: add.c add.h
	$(CXX) -c $^
	(mv add.o $(OUTPUT))

SHARED: $(OUTPUT)/final.so

$(OUTPUT)/final.so:
		+$(MAKE) -C ./
		$(CXX) $(OUTPUT)/*.o -shared -o $@

clean:
	rm -rf *.o *.gch *.so *.out