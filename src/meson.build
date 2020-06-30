subdir('find_primes_lib')

sources = files('main.cc')

executable(
    'find_primes',
    include_directories : inc,
    sources : sources,
    link_with : find_primes_lib
)
