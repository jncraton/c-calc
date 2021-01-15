all: calc

calc: calc.c
	gcc $< -o $@
	./$@ "4 + 8"
	./$@ "10 - 3"
	./$@ "2 * 4"
	./$@ "160 / 40"

clean:
	rm -f calc
