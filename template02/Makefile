# Makefile
bin: main.o src/business.o src/intelligent.o \
	src/model/module.o utils/mystring.o
	gcc -o $@ $^ -I.
	@echo 编译完成

main.o: main.c
	gcc -c main.c

business.o: business.c business.h
	gcc -c src/business.c

intelligent.o: intelligent.c intelligent.h
	gcc -c src/intelligent.c

module.o: module.c module.h
	gcc -c src/model/module.c

mystring.o: mystring.c mystring.h
	gcc -c utils/mystring.c

clean:
	@echo 清理工程......
	rm -rf bin *.o src/*.o src/model/module.o utils/*.o 