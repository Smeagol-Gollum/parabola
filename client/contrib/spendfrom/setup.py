from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for parabola "coin control"',
      author='Gavin Andresen',
      author_email='gavin@parabolafoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
