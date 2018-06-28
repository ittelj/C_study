/* ============================ [ INCLUDES  ] ====================================================== */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* ============================ [ MACROS    ] ====================================================== */

/* ============================ [ TYPES     ] ====================================================== */
//typedef void (*vfunc_t)(void);
/* ============================ [ DECLARES  ] ====================================================== */
/* ============================ [ DATAS     ] ====================================================== */
/* ============================ [ LOCALS    ] ====================================================== */

static void vfunc_instance1(void)
{
	puts(__func__);
}

static void vfunc_instance2(int a)
{
	puts(__func__);
	printf("a is %d\n",a);
}
/* ============================ [ FUNCTIONS ] ====================================================== */

void other(void)
{
	void (*pf)(int a);
	pf = vfunc_instance2;
	printf("on other line %d\n",__LINE__);
	pf(3);
	pf = vfunc_instance1;
	printf("on other line %d\n",__LINE__);
	pf(4);

}