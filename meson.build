project('find_primes', 'cpp',
    version : '0.1.0',
    license : 'MIT',
    default_options : [
        'warning_level=3',
        'cpp_std=c++17',
        'buildtype=debugoptimized',
    ],
)

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')

subdir('src')
subdir('test')
