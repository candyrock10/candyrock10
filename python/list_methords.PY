from os import remove
from pickle import APPEND


friends=["utkarsh","candy","kittu","yash"] # slicing of list
print(friends[0:2])
 
a=[1,5,3,6,'utkarsh','wdu']
a.append(2) # this will add 2 in the last of list a
a.extend([5,4,6]) # this will add multiple item at the end of the list
a.insert(2,4) # changes item at index 2 from 3 to 4
a.remove('utkarsh') # removes utkarsh from the list
a.pop(3) # removes element at index 2


print(a) 
