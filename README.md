##	libft Unit tests

libft-unit-test is a complete testing suite for 42's libft project, allowing you to test your lib, track your progress and benchmarking your lib (with system's libc or with another lib)

# Installation
You must have the following file structure:
```
.
|- libft/
|- libft-unit-tests/
```
Whereas:
	`libft` is your project folder.
	`libft-unit-tests` is the folder containing this repository.

Afterwards, you can just `make`.

(NOTE: Before running `make`, you can edit the `LIBFTDIR` variable containing the path to your libft folder.)

# Usage

Run `make f` or `./run_test` when inside the repo's directory. `./run_test -b` to use the Benchmark mode. (`-b` option to compare with system's libc and `-v <libft file>` option to compare with another libft file (should be `libft.so`).

the `-nospeed` option is available if you're mad enough at your optimization. :)

# Linux

To get it work on linux:

+ Install this two packages libbsd-dev and libncurses-dev
+ Add a rule called 'so' in your Makefile to compile your libft in dynamic library instead of static (must be called "libft.so").

