from setuptools import setup, Extension

setup_args = dict(
    ext_modules = [
        Extension(
            'pythoncpptemplate.cppmodule',
            ['cppmodule/src/computeComplicatedNumber.cpp', 'cppmodule/src/pythonBindings.cpp'],
            include_dirs = ['cppmodule/include'],
        )
    ]
)
setup(**setup_args)
