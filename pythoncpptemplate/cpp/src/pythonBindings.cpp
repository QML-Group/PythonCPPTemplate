#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include "computeComplicatedNumber.hpp"

static PyObject *computeComplicatedNumber(PyObject *self, PyObject *aNumber) {
    if (!PyLong_Check(aNumber)) {
        PyErr_SetString(PyExc_TypeError, "Argument needs to be an integer");
        return nullptr;
    }

    auto cppArgument = PyLong_AsLong(aNumber);

    auto cppResult = cpp::computeComplicatedNumber(cppArgument);

    PyObject *pythonResult = PyLong_FromLong(cppResult);

    return pythonResult;
}

static PyMethodDef cppmodule_methods[] = {
    {   "computeComplicatedNumber",
        (PyCFunction) computeComplicatedNumber,
        METH_O,
        "Example C++ function called from Python" },
    {nullptr}
};

static PyModuleDef cppModule = [] {
    PyModuleDef result{ PyModuleDef_HEAD_INIT };
    result.m_name = "cpp";
    result.m_doc = "Example Python extension module created from C++";
    result.m_size = -1;

    return result;
}();

PyMODINIT_FUNC
PyInit_cpp(void) {
    PyObject *m;
    m = PyModule_Create(&cppModule);
    if (m == nullptr) {
        return nullptr;
    }

    if (PyModule_AddFunctions(m, cppmodule_methods) < 0) {
        Py_DECREF(m);
        return nullptr;
    }

    return m;
}
