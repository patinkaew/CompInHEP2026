LIBSRC = $(wildcard src/*.cc)
LIBOBJ = $(patsubst src/%.cc, obj/%.o, $(LIBSRC))

obj/%.o: src/%.cc
	mkdir -p obj
	$(CXX) -c -o $@ $<

libmylib.so: $(LIBOBJ)
	$(CXX) -shared -Iinclude -o $@ $^

lib: libmylib.so

%.o: %.cpp
	$(CXX) -c -o $@ $<

test: test.o libmylib.so
	$(CXX) $< -L. -lmylib -o test

all:
	$(MAKE) test

GARBAGE = $(wildcard *.o *~)
clean:
	rm $(GARBAGE)
	rm $(LIBOBJ)

cleanAll:
	rm -f test
	rm -f libmylib
	$(MAKE) clean
