all: twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3

clean:
	$(RM) -f twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3 TwoLoops.class TwoLoopsWithCounter.class twoloops_rust twoloops_with_counter_rust twoloops_rust-O3 twoloops_with_counter_rust-O3 twoloops_d twoloops_d-O twoloops_with_counter_d twoloops_with_counter_d-O

twoloops:
	$(CC) twoloops.c -o twoloops

twoloops-O3:
	$(CC) -O3 twoloops.c -o twoloops-O3

twoloops_with_counter:
	$(CC) twoloops_with_counter.c -o twoloops_with_counter

twoloops_with_counter-O3:
	$(CC) -O3 twoloops_with_counter.c -o twoloops_with_counter-O3

twoloops_rust:
	rustc twoloops.rs -o twoloops_rust

twoloops_with_counter_rust:
	rustc twoloops_with_counter.rs -o twoloops_with_counter_rust

twoloops_rust-O3:
	rustc -C opt-level=3 twoloops.rs -o twoloops_rust-O3

twoloops_with_counter_rust-O3:
	rustc -C opt-level=3 twoloops_with_counter.rs -o twoloops_with_counter_rust-O3

twoloops_d:
	dmd twoloops.d -oftwoloops_d

twoloops_d-O :
	dmd -O twoloops.d -oftwoloops_d-O

twoloops_with_counter_d:
	dmd twoloops_with_counter.d -oftwoloops_with_counter_d

twoloops_with_counter_d-O:
	dmd -O twoloops_with_counter.d -oftwoloops_with_counter_d-O

TwoLoops.class:
	javac TwoLoops.java

TwoLoopsWithCounter.class:
	javac TwoLoopsWithCounter.java

benchmark: twoloops twoloops-O3 twoloops_with_counter twoloops_with_counter-O3 TwoLoops.class TwoLoopsWithCounter.class twoloops_rust twoloops_with_counter_rust twoloops_rust-O3 twoloops_with_counter_rust-O3 twoloops_d twoloops_d-O twoloops_with_counter_d twoloops_with_counter_d-O
	time ./twoloops
	time ./twoloops-O3
	time ./twoloops_with_counter
	time ./twoloops_with_counter-O3
	time ./twoloops_rust
	time ./twoloops_rust-O3
	time ./twoloops_with_counter_rust
	time ./twoloops_with_counter_rust-O3
	time ./twoloops_d
	time ./twoloops_d-O
	time ./twoloops_with_counter_d
	time ./twoloops_with_counter_d-O
	time python twoloops.py
	time python twoloops_with_counter.py
	time pypy twoloops.py
	time pypy twoloops_with_counter.py
	time ruby twoloops.rb
	time ruby twoloops_with_counter.rb
