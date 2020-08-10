
DEFAULT:
	+$(MAKE) -C src
test:
	+$(MAKE) -C tests

clean:
	rm -rf *.o *.gch *.so *.out
	+$(MAKE) -C src clean
	+$(MAKE) -C tests clean
	+$(MAKE) -C output clean