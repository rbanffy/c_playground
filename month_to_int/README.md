Two simple implementations. Naive matches the null-terminates
strings. Less naive tries to match only one char if possible and is
about 5% faster. Surprisingly, the "even less naive" version, which has
less comparisons then the less naive one, is slightly slower than the
naive version.

Inspired by https://testbit.eu/cxx-month-name-hashing/
