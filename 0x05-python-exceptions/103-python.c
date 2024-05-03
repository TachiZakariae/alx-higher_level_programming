#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
#include <floatobject.h>

/**
 * print_python_float - prints info about python float
 * @p: address of pyobject struct
 */
void print_python_float(PyObject *p)
{
	double d;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");
	if (strcmp(p->ob_type->tp_name, "float"))
	{
		printf("  [ERROR] Invalid Float Object\n");
		return;
	}
	d = ((PyFloatObject *)p)->0b_fval;
		printf("  value: %s\n",
		PyOS_double_to_string(d, 'r', 0, Py_DTSF_ADD_DOT_0, NULL));
}
