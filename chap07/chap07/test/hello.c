#include <stdio.h>


// �Լ� ���� ����
int test_swapDouble();
void* swapDouble(double* pa, double* pb); 
int test_print_array();
void print_array_double(double arr[], int size);
void print_Array_Double(double* arr, int size);


int main()
{

	//test_swapDouble();
	test_print_array();

	//printf("hello, world!\n");

	return 0;
}


int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("ERROR11\n");
	}
	else
	{
		printf("a = %f, b =  %f\n", a, b);
	}

	double* presult2 = (double*)swapDouble((double*)NULL, &b);
	if (presult2 == NULL)
	{
		printf("ERROR22\n");
	}
}


void * swapDouble(double *pa, double *pb)
{
	// 1. �Է� �� ���� üũ (NULL == ������)
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
		
	// 2. swap two value(�� �̵� ��Ű��)
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}


int test_print_array()
{
	double da[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	print_Array_Double(&da[0], size);

	return 0;
}


// ���: 1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�
// �Լ���: print_array_double
// �Է�: double Ÿ�� 1���� �迭 �ּ� 
// ���: �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ: ����

void print_array_double(double arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");


}


void print_Array_Double(double* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
	{
		printf("%lf ", *arr);
	}
	printf("\n");


}