#include "C_Basic.h"

/***************************Hello World!!***************************/

int hello_main(void)
{
	printf("Hello, World!!\n");
	return 0;
}

/***********************Function printf Example**********************/

int print_main(void)
{
	printf("Hello, World!!\n");
	printf("%d\n",1234);
	printf("%d %d\n", 10, 20);

	return 0;
}

/**************************Variable Example**************************/

int var_main(void)
{
	int new_year;
	new_year=2019;

	printf("Happy New Year(%d) \n",new_year);

	return 0;
}

/**************************Operator Example**************************/

int oper_main(void)
{
	int num1 = 8;
	int num2 = 3;

	printf("Addition : %d + %d = %d \n", num1, num2, num1 + num2);
	printf("Subtraction : %d - %d = %d \n", num1, num2, num1 - num2);
	printf("Multiplication : %d * %d = %d \n", num1, num2, num1 * num2);
	printf("Quota : %d / %d = %d \n", num1, num2, num1 / num2);
	printf("Remainder : %d %% %d = %d \n", num1, num2, num1 % num2);

	return 0;
}

/**********************Operator Complex Example**********************/

int oper_com_main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;

	printf("a=%d, b=%d, ", a,b);
	c = a + b;
	printf("a + b -> %d, a+=b -> %d \n", c, a+=b);

	return 0;
}

/*******************Operator Complex Logic Example*******************/

int oper_com_log_main(void)
{
	int A = 10;
	int B = 8;
	printf("A<B ... %d \n", A<B);
	printf("A>B ... %d \n", A>B);
	printf("A==B ... %d \n", A==B);
	printf("A!=B ... %d \n", A!=B);
	printf("A<=B ... %d \n", A<=B);
	printf("A>=B ... %d \n", A>=B);

	int C=1; // TRUE
	int D=0; // FALSE
	printf("C&&D ... %d \n", C&&D);
	printf("C||D ... %d \n", C||D);
	printf("!C ... %d \n", !C);

	return 0;

}

/*********************Special Character Example*********************/

int special_char_main(void)
{
	printf("다빈이는 지혜에게 \"오늘 몇 시에 만날까\?\"라고 물었다.\n");

	return 0;
}

/*******************Variable Type Transform Example*******************/

int type_trans_main(void)
{
	double num1 = 100; //정수 100을 double형으로 자동 형 변환
	int num2=3.1415; // double형 실수 3.1415를 int형으로 자동 형 변환

	printf("정수 100을 실수로 : %.5f \n", num1);
 	printf("실수 3.1415를 정수로 : %d\n", num2);

	return 0;
}

/********************Loop Operator while Example**********************/

int while_main(void)
{
	int dan=9;
	int i=1;

	while(i<10)  // 반복문의 조건
	{
		printf("%d x %d = %d\n", dan, i, dan*i);
		i++;
	}
	return 0;

}

/*********************Loop Operator for Example**********************/

int for_main(void)
{
	int dan=9;
	int i=1;

	for(i=1 ; i<10 ; i++)
	{
		printf("%d x %d = %d\n", dan, i, dan*i);
	}
	return 0;

}

/*******************Conditional Operator if Example******************/

int if_main(void)
{
	int A = 100;
	int B = 5;
	int result;

	char ch = '+';

	if(ch == '+')
		result = A+B;
	else if(ch == '-')
		result = A-B;
	else if(ch == '*')
		result = A*B;
	else if(ch == '/')
		result = A/B;
	else
		result = 0;

	printf("Result : A %c B = %d\n", ch, result);


	return 0;
}

/****************Conditional Operator switch Example*****************/

int switch_main(void)
{
	int A = 100;
	int B = 5;
	int result;

	char ch = '+';

	switch(ch)
	{
	case '+' :
		result = A+B;
		break;
	case '-' :
		result = A-B;
		break;
	case '*' :
		result = A*B;
		break;
	case '/' :
		result = A/B;
		break;
	default :
		result = 0;
		break;
	}

	printf("Result : A %c B = %d\n", ch, result);

	return 0;
}

/************************Function Example*************************/

void f_Print(void)
{
	printf("f_Print Function \n");
}

int f_Sum(int num1, int num2)
{
	return num1 + num2;
}


int func_main(void)
{
	int a = 10;
	int b = 20;
	int sum_ab=0;

	f_Print();

	sum_ab=f_Sum(a,b);
	printf("The sum of %d and %d is %d\n",a,b,sum_ab);
	return 0;
}

/******************Global & Local Variable Example*****************/

int global_var = 0;

void function1(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("global_val of function1 is %d \n",global_var);
	printf(" local_val of function1 is %d \n",local_var);

}

void function2(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("global_val of function2 is %d \n",global_var);
	printf(" local_val of function2 is %d \n",local_var);

}

int glob_loc_main(void)
{
	int local_var = 0;
	local_var++;
	global_var++;

	printf("global_val of main is %d \n", global_var);
	printf(" local_val of main is %d \n", local_var);

	function1();
	function2();

	return 0;
}

/**************************Array Example***************************/

int array_main(void)
{
	int arr[5]={1,2,3,9};
	int i=0;

	for(i=0 ; i<5 ; i++)
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}

	return 0;
}

/*************************Pointer Example**************************/

int pointer_main(void)
{
	int num = 10;
	int *pnum = &num;

	printf("The Address of num is %d\n",pnum);
	printf("The Address of num is %d\n",&num);
	printf("The Value of num is %d\n",*pnum);
	printf("The Value of num is %d\n",num);

	return 0;
}

/*********************Pointer & Array Example**********************/

int pointer_arr_main(void)
{
	int arr[5];
	int i=0;
	int *parr = &arr[0];

	for(i=0 ; i<5 ; i++)
	{
		arr[i] = 10-i; // array initialization
		printf("arr[%d] | Address %d | Value : %d\n",i,&arr[i],arr[i]);
	}

	printf("The Value of parr is %d\n",parr);
	printf("The Value of arr is %d\n",arr);
	printf("The Value of *parr is %d\n",*parr);
	printf("The Value of *(parr+1) is %d\n",*(parr+1));

	return 0;
}

/********************Pointer & Function Example*********************/

void np_swap(int x, int y)
{
	int temp;

	temp = x;
	x=y;
	y=temp;
	printf("[np_swap()] The results : x=%d, x=%d\n",x,y);
}

void p_swap(int* px, int*py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
	printf("[ p_swap()] The results : x=%d, x=%d\n",*px,*py);
}


int pointer_func_main(void)
{
	int a=3;
	int b=5;

	printf("Before Swap : a=%d, b=%d\n",a,b);

	np_swap(a,b);
	printf("[   main()] The results of np_swap() : a=%d, b=%d\n",a,b);

	p_swap(&a,&b);
	printf("[   main()] The results of  p_swap() : a=%d, b=%d\n",a,b);

	return 0;
}


/********************************Setting Function*********************************/

static void show_help_C(FAR char *argv[])
{
	printf("|-------------------------------------------|\n");
	printf("| ******* ARTIK053 C BASIC PROGRAMS ******* |\n");
	printf("|  1. Hello World!!                         |\n");
	printf("|  2. Function \"printf\" Example             |\n");
	printf("|  3. Variable Example                      |\n");
	printf("|  4. Operator Example                      |\n");
	printf("|  5. Operator Complex Example              |\n");
	printf("|  6. Operator Complex Logic Example        |\n");
	printf("|  7. Special Character Example             |\n");
	printf("|  8. Variable Type Transform Example       |\n");
	printf("|  9. Loop Operator \"while\" Example         |\n");
	printf("| 10. Loop Operator \"for\" Example           |\n");
	printf("| 11. Conditional Operator \"if\" Example     |\n");
	printf("| 12. Conditional Operator \"switch\" Example |\n");
	printf("| 13. Function Example                      |\n");
	printf("| 14. Global & Local Variable Example       |\n");
	printf("| 15. Array Example                         |\n");
	printf("| 16. Pointer Example                       |\n");
	printf("| 17. Pointer & Array Example               |\n");
	printf("| 18. Pointer & Function Example            |\n");
	printf("|-------------------------------------------|\n");

}


int C_main(int argc, FAR char *argv[])
{
	if ( (argc==2) && (strcmp(argv[1],"1")==0) ) {hello_main();}
	else if ( (argc==2) && (strcmp(argv[1],"2")==0) ) {print_main();}
	else if ( (argc==2) && (strcmp(argv[1],"3")==0) ) {var_main();}
	else if ( (argc==2) && (strcmp(argv[1],"4")==0) ) {oper_main();}
	else if ( (argc==2) && (strcmp(argv[1],"5")==0) ) {oper_com_main();}
	else if ( (argc==2) && (strcmp(argv[1],"6")==0) ) {oper_com_log_main();}
	else if ( (argc==2) && (strcmp(argv[1],"7")==0) ) {special_char_main();}
	else if ( (argc==2) && (strcmp(argv[1],"8")==0) ) {type_trans_main();}
	else if ( (argc==2) && (strcmp(argv[1],"9")==0) ) {while_main();}
	else if ( (argc==2) && (strcmp(argv[1],"10")==0) ) {for_main();}
	else if ( (argc==2) && (strcmp(argv[1],"11")==0) ) {if_main();}
	else if ( (argc==2) && (strcmp(argv[1],"12")==0) ) {switch_main();}
	else if ( (argc==2) && (strcmp(argv[1],"13")==0) ) {func_main();}
	else if ( (argc==2) && (strcmp(argv[1],"14")==0) ) {glob_loc_main();}
	else if ( (argc==2) && (strcmp(argv[1],"15")==0) ) {array_main();}
	else if ( (argc==2) && (strcmp(argv[1],"16")==0) ) {pointer_main();}
	else if ( (argc==2) && (strcmp(argv[1],"17")==0) ) {pointer_arr_main();}
	else if ( (argc==2) && (strcmp(argv[1],"18")==0) ) {pointer_func_main();}

	else show_help_C(argv);

	return 0;
}


