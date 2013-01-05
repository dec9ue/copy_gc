OBJS = copy_gc.o copy_gc_test.o
CFLAGS += -g

run_test: test
	./test

test: $(OBJS)
	gcc -o $@ $(OBJS)

clean:
	rm -rfv *.o *~ *.bak
