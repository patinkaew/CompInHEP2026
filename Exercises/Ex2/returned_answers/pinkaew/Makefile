SRC = $(wildcard *.cpp)
OBJECTS = $(addsuffix .o, $(basename $(SRC)))

OBJ = $(basename $(wildcard *.cxx))

all:
	$(MAKE) compile
	$(MAKE) hello

.cpp.o:
	$(CXX) -c $<

compile: $(OBJECTS)

hello: $(OBJECTS)
	$(CXX) $(OBJECTS) -o hello

GARBAGE = $(wildcard *.o *~)
clean:
	rm $(GARBAGE)

cleanAll:
	rm -f hello
	$(MAKE) clean
