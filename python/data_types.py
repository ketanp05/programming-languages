# print multiple lines
multiple_lines = '''
hello there
        hi theree
                            wasuuppppp!!!!
'''
print(multiple_lines)

# constructor for data type
name = str('ketan patil')
year = str(1900)

print(type(year))

# string methods
print(name.lower())
print(name.upper())



# lets build a menu
print('welcome welcome welcome')
title_of_the_menu = 'sai chaya'.upper()
print(title_of_the_menu.center(20, "="))
print("misal special".ljust(16, ".") + "4$".rjust(4))
print("misal basic".ljust(16, ".") + "14$".rjust(4))
print("misal pune".ljust(16, ".") + "43$".rjust(4))
print("".center(20, "*"))
print(" ")

# string index / string traversal
print(name[1:-1]) # range of values excluding 1, -1
print(name[1:]) # all exculiding 1

# some string methods return boolean data
print(name.startswith('k')) 
print(name.startswith('z')) 
print(name.endswith('l'))

print('\n')

# data types numeric

# integer
pearl_jam = int(45)
print(type(pearl_jam))
print('yes its an integer') if isinstance(pearl_jam, int) else print('i guess not')

print('\n')

# float
pearl_jam_float = float(45.55)
print(type(pearl_jam_float))
print('yes its a float') if isinstance(pearl_jam_float, float) else print('i guess not')

print('\n')

# built in funcs for nums
print(abs(345*-1))
print(round(45.92, 1))

import math
print(math.sqrt(16))
print(math.pi)
print(math.ceil(3.45))
print(math.floor(3.56))



