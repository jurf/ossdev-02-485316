[![Build Status](https://travis-ci.org/jurf/ossdev-02-485316.svg?branch=master)](https://travis-ci.org/jurf/ossdev-02-485316)

# find_primes

Dead-simple prime calculation.

## Building

```sh
meson builddir
cd builddir
ninja
ninja test
```

## Usage

```sh
$ src/find_primes
Enter lower bound:
0
Enter upper bound:
10

Found primes:
2, 3, 5, 7
```
