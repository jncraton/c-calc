all: calc

calc: calc.c
	gcc -Wall -Wextra -Wno-unused-parameter $< -o $@

test: calc
	@./$< "1+1"
	@test "1 + 2 = 3" = "`./$< "1 + 2"`"
	@test "3 - 2 = 1" = "`./$< "3 - 2"`"
	@test "3 * 2 = 6" = "`./$< "3 * 2"`"
	@test "8 / 2 = 4" = "`./$< "8 / 2"`"
	@echo All tests passed.

clean:
	rm -f calc
