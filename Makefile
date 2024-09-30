build: src/main.cpp src/UTS.hpp
	g++ -o build/out src/main.cpp

run: build/out
	cd build && ./out

edit: 
	hexedit build/test.uts