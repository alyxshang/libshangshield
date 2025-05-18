build: ; clang -c src/libshangshield.c -o libshangshield.o
archive: ; ar rcs libshangshield.a libshangshield.o
test: ; gcc -I./src tests/tests.c libshangshield.a -o tests.bin
run_tests: ; ./tests.bin
clean: ; rm -rf *.a *.o *.bin docs
docs: ; doxygen
