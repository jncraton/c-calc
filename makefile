all: calc

calc: calc.c
	gcc $< -o $@

test: calc
	./$< "4 + 8"
	./$< "10 - 3"
	./$< "2 * 4"
	./$< "160 / 40"
	test "1 + 2 = 3" = "`./$< "1 + 2"`"
	test "3 - 2 = 1" = "`./$< "3 - 2"`"
	test "3 * 2 = 6" = "`./$< "3 * 2"`"
	test "8 / 2 = 4" = "`./$< "8 / 2"`"

clean:
	rm -f calc
