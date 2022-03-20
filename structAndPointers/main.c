#include <stdio.h>

int main() {
	
	struct person {
		int age;
		char *name;
	};

	struct person p1 = {15, "Carlos"};

	struct person *p = &p1;

	//p = &p1;

	p->age = 18;
	p->name = "Marcos";

	printf("%s tem %u anos \n", p->name, p->age);

	return 0;

}
