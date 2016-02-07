all: twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3

clean:
	rm -f twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3 TwoLoops.class TwoLoopsWithCounter.class

twoloops:
	gcc twoloops.c -o twoloops

twoloops-O3:
	gcc -O3 twoloops.c -o twoloops-O3

twoloops_with_counter:
	gcc twoloops_with_counter.c -o twoloops_with_counter

twoloops_with_counter-O3:
	gcc -O3 twoloops_with_counter.c -o twoloops_with_counter-O3

TwoLoops.class:
	javac TwoLoops.java

TwoLoopsWithCounter.class:
	javac TwoLoopsWithCounter.java

benchmark: twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3 TwoLoops.class TwoLoopsWithCounter.class
	time ./twoloops
	time ./twoloops-O3
	time ./twoloops_with_counter
	time ./twoloops_with_counter-O3
	time python twoloops.py
	time pypy twoloops.py
	time ruby twoloops.rb
	time ruby twoloops_outer_j.rb
