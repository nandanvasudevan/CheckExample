CXX := gcc
LDFLAGS := `pkg-config --cflags --libs check`
OUTPUT := ../output
DEFAULT: $(OUTPUT)/check_add.out

$(OUTPUT)/check_add.out: check_add.c $(OUTPUT)/final.so
	$(CXX) $^ $(LDFLAGS) -o $@

$(OUTPUT)/final.so:
	+$(MAKE) -C ../src/ SHARED

clean:
	rm -rf *.o *.gch *.so *.out
	