project('simple_db', 'c',
  version : '0.1.0',
  default_options : ['warning_level=3'])

inc = include_directories('include')

# Source files
src_files = [
  'main.c',
  'src/math.c',
  'tests/test_math.c'
]

# Create an executable for the simple_db application
simple_db_sources = ['main.c', 'src/math.c']
simple_db_exec = executable(
  'simple_db',
  simple_db_sources,
  include_directories : inc,
  install : true
)

# Create an executable for the tests
test_sources = ['tests/test_math.c', 'src/math.c']
test_exec = executable(
    'run_tests',
    test_sources,
    include_directories : inc
)

test('Simple DB Tests', test_exec)
