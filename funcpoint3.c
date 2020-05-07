#include <stdio.h>
#include <stdlib.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void  multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}
typedef void (*fun_ptr)(int a, int b);

typedef struct
{
	fun_ptr	fun;
	int 	num1;
	int 	num2;
} math;

math data[]=
{
  {add , 20 , 10},
  {subtract, 20 , 10},
  {multiply, 20, 10}
};


int main(void)
{	
	math *pmath= NULL;
	
	data[0].fun(data[0].num1,data[0].num2 );
	data[1].fun(data[1].num1,data[1].num2 );
	data[2].fun(data[2].num1,data[2].num2 );
	
	pmath = data;
	printf("the address of pointer pmath is %p\n", &pmath);
	printf("the content of pointer pmath is %p\n\n", pmath);
		
	pmath->fun(data->num1,data->num2);
	pmath++;
	pmath->fun(data->num1,data->num2);
	pmath++;
	pmath->fun(data->num1,data->num2);

	printf("\nthe address for add fucntion is %p\n", &add);
	printf("the address for subtract fucntion is %p\n", &subtract);
	printf("the address for multiply fucntion is %p\n", &multiply);
	
	printf("the address for struct array data[0] is %p\n", &data[0]);
	printf("the address for struct array data[1] is %p\n", &data[1]);
	printf("the address for struct array data[2] is %p\n", &data[2]);

	printf("\nthe address for pointer pmath is %p\n", &pmath);
	printf("the content for pointer pmath is %p\n", pmath);
	return 0;
}












