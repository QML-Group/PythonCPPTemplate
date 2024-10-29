from setuptools import setup, Extension

setup_args = dict(
    ext_modules = [
        Extension(
            'pythoncpptemplate.cpp',
            ['pythoncpptemplate/cpp/src/computeComplicatedNumber.cpp', 'pythoncpptemplate/cpp/src/pythonBindings.cpp'],
            include_dirs = ['pythoncpptemplate/cpp/include'],
        )
    ]
)
setup(**setup_args)
