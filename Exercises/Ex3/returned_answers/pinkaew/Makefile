LIBSRC = $(wildcard src/*.cc)
LIBOBJ = $(patsubst src/%.cc, obj/%.o, $(LIBSRC))

obj/%.o: src/%.cc
	mkdir -p obj
	$(CXX) -c -o $@ $<

libmet.so: $(LIBOBJ)
	$(CXX) -shared -Iinclude -o $@ $^

%.o: %.cpp
	$(CXX) -c -o $@ $<

test: test.o libmet.so
	$(CXX) $< -L. -lmet -o test

all:
	$(MAKE) test

GARBAGE = $(wildcard *.o *~)
clean:
	rm $(GARBAGE)
	rm $(LIBOBJ)

cleanAll:
	rm -f test
	rm -f libmet.so
	$(MAKE) clean
