#include<stdio.h>
struct Rational{
	int numer, denumer;
};

struct Rational *add(struct Rational *R1, struct Rational *R2)
{
	struct Rational *R3;
	R3=malloc(sizeof(struct Rational));
	R3->numer=((R1->numer * R2->denumer)+(R2->numer * R1->denumer));
	R3->denumer=(R1->denumer*R2->denumer);
	
	return R3;
}

struct Rational *sub(struct Rational *R1, struct Rational *R2)
{
	struct Rational *R3;
	R3=malloc(sizeof(struct Rational));
	R3->numer=((R1->numer * R2->denumer)-(R2->numer * R1->denumer));
	R3->denumer=(R1->denumer*R2->denumer);
	
	return R3;
}

struct Rational *multi(struct Rational *R1, struct Rational *R2)
{
	struct Rational *R3;
	R3=malloc(sizeof(struct Rational));
	R3->numer=((R1->numer * R2->numer));
	R3->denumer=(R1->denumer*R2->denumer);
	
	return R3;
}

struct Rational *div(struct Rational *R1, struct Rational *R2)
{
	struct Rational *R3;
	R3=malloc(sizeof(struct Rational));
	R3->numer=((R1->numer * R2->denumer));
	R3->denumer=(R1->denumer*R2->numer);
	
	return R3;
}

void *print(struct Rational *R3)
{
	printf("%d/%d", R3->numer, R3->denumer);
}
int main()
{
	struct Rational *R1, *R2, *R3;
	R1=malloc(sizeof(struct Rational));
	R2=malloc(sizeof(struct Rational));
	R1->numer=1;
	R1->denumer=2;
	R2->numer=3;
	R2->denumer=4;
	
	
	R3=add(R1, R2);
	printf("Add: ");
	print(R1);
	printf(" + ");
	print(R2);
	printf(" = ");
	print(R3);
	
	R3=sub(R1, R2);
	printf("\nSub: ");
	print(R1);
	printf(" - ");
	print(R2);
	printf(" = ");
	print(R3);
	
	R3=multi(R1, R2);
	printf("\nMulti: ");
	print(R1);
	printf(" * ");
	print(R2);
	printf(" = ");
	print(R3);
	
	R3=div(R1, R2);
	printf("\nDiv: ");
	print(R1);
	printf(" / ");
	print(R2);
	printf(" = ");
	print(R3);
	
	free(R3);
}


