#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info -  function
 * @p:the list python
 */
void print_python_list_info(PyObject *p)
{
	int you;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (you = 0; you < Py_SIZE(p); you++)
		printf("Element %d: %s\n", you, Py_TYPE(PyList_GetItem(p, you))->tp_name);
}
