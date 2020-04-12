sources = ['main.cc']
headers = ['main.h']

executable('find_primes', sources)

find_primes_lib = library('find_primes',
    include_directories : inc,
    sources: [headers,sources],
)

find_primes_dep = declare_dependency(
    include_directories : inc,
    link_with : find_primes_lib,
)
