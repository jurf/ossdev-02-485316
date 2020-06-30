gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_main_dep')

test_find_primes = executable(
    'test_find_primes',
    'test_find_primes.cc',
    include_directories : inc,
    dependencies : gtest_dep,
    link_with : find_primes_lib,
)

test('test find_primes', test_find_primes)
