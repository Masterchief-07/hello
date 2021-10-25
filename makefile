cc=g++-11
params = -Wall -std=c++2a

all: hello

hello: hello.cpp
	$(cc) $(params) $^ -o $@

clean:
	rm -rf hello
