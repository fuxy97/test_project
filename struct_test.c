#include <stdio.h>
#include <stdlib.h>

struct test_struct {
	int a;
	int b;
	float c;
};

int main()
{
	int a = 1;
	struct test_struct s1;
	s1.a = a;
	s1.b = 2;
	s1.c = 1.5;

	sizeof(s1);
	struct test_struct* s2 = (struct test_struct*)malloc(sizeof(struct test_struct));
	s2->a = 1;
	s2->b = 2;
	s2->c = 1.5;

	printf("%d %d %f", s1.a, s1.b, s1.c);
	printf("%d %d %f", s2->a, s2->b, s2->c);
	return 0;
}
